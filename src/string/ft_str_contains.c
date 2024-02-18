/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_contains.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcodina- <jcodina-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:09:07 by jcodina-          #+#    #+#             */
/*   Updated: 2024/02/18 19:09:43 by jcodina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
/**
 * Check if str contains any of the characters in chars
 * @return True if any character is contained. False otherwise
 */
t_bool	ft_str_contains(char *str, char *chars)
{
	int	i;
	int	keys[256];

	i = -1;
	ft_bzero(keys, 256 * sizeof(int));
	while (str[++i])
		keys[(int) str[i]] = 1;
	i = -1;
	while (chars[++i])
	{
		if (keys[(int) chars[i]] == 1)
			return (true);
	}
	return (false);
}
