/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 18:41:43 by ccastill          #+#    #+#             */
/*   Updated: 2018/03/24 00:41:31 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*result;
	size_t			pos;
	size_t			size;

	pos = 0;
	if (!s)
		return (NULL);
	size = ft_strlen(s);
	result = ft_strnew(size);
	if (!(result))
		return (NULL);
	while (pos < size)
	{
		result[pos] = f(s[pos]);
		pos++;
	}
	return (result);
}
