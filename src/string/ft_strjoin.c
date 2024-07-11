/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcodina- <fjavier.codina@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:09:04 by jcodina-          #+#    #+#             */
/*   Updated: 2024/06/21 13:49:43 jcodina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
/**
 * Allocates a string where the result of the concatenation of s1 and s2
 * is copied.
 * @param s1 string 1.
 * @param s2 string 2.
 * @return Allocated string. NULL if allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(size + 1);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	if (s1)
		ft_strcpy(str,s1);
	if (s2)
		ft_strcat(str,s2);
	return (str);
}

/**
 * Allocates a string where the result of the concatenation of s1 and s2
 * is copied. Frees strings given as args
 * @param s1 string 1.
 * @param s2 string 2.
 * @param p  Select which param(s) to free
 * @return Allocated string. NULL if allocation fails.
 */
char	*ft_strjoin_free(char *s1, char *s2, enum e_param_selector p)
{
	char	*str;
	
	str = ft_strjoin(s1, s2);
	if (s1 && (p == FIRST || p == BOTH))
		free(s1);
	if (s2 && (p == SECOND || p == BOTH))
		free(s2);
	return (str);
}
