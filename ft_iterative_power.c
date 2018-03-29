/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 21:13:25 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/01 20:16:22 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iterative_power(int nb, int power)
{
	int		final;
	int		pow;

	final = 1;
	pow = power;
	if (pow >= 0)
	{
		while (pow > 0)
		{
			final = final * nb;
			pow--;
		}
		return (final);
	}
	return (0);
}
