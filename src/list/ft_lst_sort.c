/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_dup.c			                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcodina- <fjavier.codina@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 14:59:34 by jcodina-          #+#    #+#             */
/*   Updated: 2023/12/31 14:59:34 by jcodina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

t_bool	ft_lst_is_sorted(t_list *lst, int(cmp)(void *, void *))
{
	t_bool	rc;

	rc = true;
	while (lst != NULL)
	{
		if (lst->next == NULL)
			break ;
		if (cmp(lst->content, lst->next->content) < 0)
			return (false);
		lst = lst->next;
	}
	return (rc);
}

/**
 * Sort list.
 * @param lst_src list to sort.
 * @param cmp function to compare content.
 * @return sorted list.
 */
t_list	*ft_lst_sort(t_list *lst_src, int(cmp)(void *, void *))
{
	t_list	*node_prev;
	t_list	*node_curr;
	t_list	*node_aux;

	node_curr = lst_src->next;
	node_prev = lst_src;
	while (node_curr != NULL)
	{
		if (cmp(node_curr->content, node_prev->content) > 0)
		{
			if (node_prev == lst_src)
				lst_src = node_curr;
			node_aux = node_curr->next;
			node_curr->next = node_prev;
			node_prev->next = node_aux->next;
			node_curr = lst_src->next;
			node_prev = lst_src;
			continue ;
		}
		node_prev = node_curr;
		node_curr = node_curr->next;
	}
	return (lst_src);
}
