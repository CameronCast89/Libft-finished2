/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 17:42:04 by ccastill          #+#    #+#             */
/*   Updated: 2018/03/19 17:24:20 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t num)
{
	int		pos;

	pos = 0;
	while ((str1[pos] != '\0' || str2[pos] != '\0') && num-- > 0)
	{
		if (str1[pos] != str2[pos])
			return ((unsigned char)str1[pos] - (unsigned char)str2[pos]);
		pos++;
	}
	return (0);
}
