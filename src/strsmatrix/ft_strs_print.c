/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcodina- <jcodina-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 14:51:33 by jcodina-          #+#    #+#             */
/*   Updated: 2024/01/23 19:56:05 by jcodina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_strs_print(const char **strs)
{
	int	i;

	i = 0;
	ft_printf("STRS\n----------\n");
	if (strs == NULL)
		ft_printf("(null)\n");
	else
	{
		while (strs[i] != NULL)
		{
			ft_printf("%s\n", strs[i]);
			i++;
		}
	}
	ft_printf("----------\n");
}
