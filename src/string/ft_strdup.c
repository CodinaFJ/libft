/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcodina- <fjavier.codina@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:09:46 by jcodina-          #+#    #+#             */
/*   Updated: 2024/06/19 20:04:57 by jcodina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
/**
 * Allocates sufficient memory for a copy of the string s,
 * does the copy, and returns a pointer to it
 * @param s string to copy.
 * @return Pointer to allocated string.
 */
char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == NULL)
	{
		free(dup);
		return (NULL);
	}
	if (s == NULL || len == 0)
	{
		dup[0] = '\0';
		return (dup);
	}	
	ft_memcpy(dup, s, len + 1);
	return (dup);
}

/**
 * It takes a string and a character, and returns a copy of the
 * string until the first occurrence of
 * the character (not included)
 * 
 * @param str The string to be copied.
 * @param limit the character that will be used to limit the string.
 * 
 * @return A pointer to a new string.
 */
char	*ft_strdup_limit_excluded(const char *str, char limit)
{
	char	*dst;
	int		len;
	int		i;

	i = 0;
	len = 0;
	if (str == NULL)
		return (NULL);
	while (str[len] && str[len] != (limit))
		len++;
	if (len == 0)
		return (NULL);
	dst = (char *)malloc(sizeof(*dst) * (len + 1));
	if (!dst)
		return (NULL);
	while (i < len)
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}