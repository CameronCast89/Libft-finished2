/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 17:42:04 by ccastill          #+#    #+#             */
/*   Updated: 2018/03/19 16:45:27 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	size_t	pos;

	if (*str2 == '\0')
		return ((char *)str1);
	while (*str1)
	{
		pos = 0;
		while (str1[pos] == str2[pos])
		{
			pos++;
			if (str2[pos] == '\0')
				return ((char *)str1);
		}
		str1++;
	}
	return (0);
}
