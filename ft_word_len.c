/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 15:25:44 by ccastill          #+#    #+#             */
/*   Updated: 2018/03/28 15:25:54 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_word_len(char const *str, char c)
{
	int	len;

	len = 0;
	while (*str == c)
		str++;
	while (*str != c && *str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}
