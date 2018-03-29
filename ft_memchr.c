/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 14:43:12 by ccastill          #+#    #+#             */
/*   Updated: 2018/03/18 21:14:10 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *temp;

	temp = (unsigned char *)str;
	while (n--)
	{
		if (*(temp++) == (unsigned char)c)
			return (void *)(temp - 1);
	}
	return (NULL);
}
