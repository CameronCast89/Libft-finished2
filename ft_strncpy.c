/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 23:19:45 by ccastill          #+#    #+#             */
/*   Updated: 2018/03/19 11:10:04 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncpy(char *dest, const char *str, size_t num)
{
	size_t	chars;

	chars = 0;
	ft_memset(dest, '\0', num);
	while (chars < num && str[chars])
	{
		dest[chars] = str[chars];
		chars++;
	}
	return (dest);
}
