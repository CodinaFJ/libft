/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcodina- <jcodina-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:47:07 by jcodina-          #+#    #+#             */
/*   Updated: 2024/01/19 18:41:15 by jcodina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
/**
 * Adds given new node to the front of given list lst.
 * @param lst Pointer to first node in list where to add the new node.
 * @param new Node to add
 * @warning t_list **lst needs to be initialized first. In case of empty
 * list please do "lst = NULL" before.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
