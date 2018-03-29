/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 17:42:04 by ccastill          #+#    #+#             */
/*   Updated: 2018/03/19 15:17:44 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int chars;

	chars = ft_strlen(str);
	while (chars >= 0)
		if (str[chars--] == (char)c)
			return ((char *)str + chars + 1);
	return (NULL);
}
