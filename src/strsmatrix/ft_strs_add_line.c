/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_add_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcodina- <jcodina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 13:39:34 by jcodina-          #+#    #+#             */
/*   Updated: 2024/07/26 14:12:09 by jcodina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/**
 * Duplicates str and apends it to the NULL terminated matrix of strings strs.
 * Matrix of strings should have enough allocated space.
 * @param str source string.
 * @param strs strings matrix where str is being appended.
 * @return Pointer to added string. NULL if allocation fails.
 */
char	*ft_strs_add_line(const char *str, char **strs)
{
	unsigned int	i;

	i = ft_strs_rows((const char **) strs);
	strs[i] = ft_strdup(str);
	if (strs[i] == NULL)
		return (NULL);
	strs[i + 1] = NULL;
	return (strs[i]);
}
