/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 12:48:16 by ccastill          #+#    #+#             */
/*   Updated: 2017/06/30 14:36:16 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_sort_integer_table(int *tab, int size)
{
	int		a;
	int		b;
	int		temp;

	a = 0;
	b = 0;
	temp = 0;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			if (*(tab + a) > *(tab + b))
			{
				temp = *(tab + a);
				*(tab + a) = *(tab + b);
				*(tab + b) = temp;
			}
			b++;
		}
		a++;
	}
}
