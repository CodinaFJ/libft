/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcodina- <jcodina-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 14:51:33 by jcodina-          #+#    #+#             */
/*   Updated: 2024/01/19 18:41:15 by jcodina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * Returns an allocated duplicate of the NULL termianted matrix of strings strs
*/
char	**ft_strsdup(const char **strs)
{
	char	**new_strs;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strs_rows(strs);
	new_strs = malloc((len + 1) * sizeof(char *));
	new_strs[len] = NULL;
	while (strs[i] != NULL)
	{
		new_strs[i] = ft_strdup(strs[i]);
		i++;
	}
	return (new_strs);
}
