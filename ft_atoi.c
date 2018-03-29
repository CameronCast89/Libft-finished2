/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 15:54:32 by ccastill          #+#    #+#             */
/*   Updated: 2018/03/19 18:25:56 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int		pos;
	int		neg;
	int		result;

	neg = 1;
	result = 0;
	pos = 0;
	while ((str[pos] >= 9 && str[pos] <= 13) || str[pos] == 32)
		pos++;
	if (str[pos] == '-' || str[pos] == '+')
	{
		if (str[pos] == '-')
			neg = -1;
		pos++;
	}
	while (ft_isdigit(str[pos]) == 1)
	{
		result = (result * 10) + (str[pos] - '0');
		pos++;
	}
	return (neg * result);
}
