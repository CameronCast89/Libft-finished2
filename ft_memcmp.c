/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:31:16 by ccastill          #+#    #+#             */
/*   Updated: 2018/03/19 10:17:05 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned const char	*s1;
	unsigned const char *s2;
	size_t				bytes;

	s1 = ptr1;
	s2 = ptr2;
	bytes = 0;
	while ((bytes < num))
	{
		if (s1[bytes] != s2[bytes])
			return (s1[bytes] - s2[bytes]);
		bytes++;
	}
	return (0);
}
