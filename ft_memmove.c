/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:31:31 by ccastill          #+#    #+#             */
/*   Updated: 2018/03/18 23:36:17 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*memdst;
	unsigned char		*memsrc;

	memdst = (unsigned char*)dest;
	memsrc = (unsigned char*)src;
	if (memdst == memsrc)
		return (dest);
	if (memdst > memsrc)
	{
		memdst = memdst + n - 1;
		memsrc = memsrc + n - 1;
		while (n-- > 0)
			*(memdst--) = *(memsrc--);
		return (dest);
	}
	while (n-- > 0)
		*(memdst++) = *(memsrc++);
	return (dest);
}
