/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 17:42:04 by ccastill          #+#    #+#             */
/*   Updated: 2018/03/19 18:06:08 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t src_len;
	size_t dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dest);
	if (dst_len < size)
	{
		ft_memcpy(dest + dst_len, src, size - dst_len - 1);
		dest[size - 1] = '\0';
		return (dst_len + src_len);
	}
	return (size + src_len);
}
