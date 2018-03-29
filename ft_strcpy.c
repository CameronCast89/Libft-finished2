/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 23:19:45 by ccastill          #+#    #+#             */
/*   Updated: 2018/03/19 10:57:30 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *str)
{
	int		str_num;

	str_num = 0;
	while (str[str_num])
	{
		dest[str_num] = str[str_num];
		str_num++;
	}
	dest[str_num] = str[str_num];
	return (dest);
}
