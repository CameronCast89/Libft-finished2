/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 04:50:50 by ccastill          #+#    #+#             */
/*   Updated: 2018/03/24 04:50:52 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new;
	int		bck;
	int		frnt;
	int		size;

	frnt = 0;
	if (s == NULL)
		return (NULL);
	bck = ft_strlen(s) - 1;
	while (s[bck] == ' ' || s[bck] == '\t' || s[bck] == '\n')
		bck--;
	while ((s[frnt] == ' ' || s[frnt] == '\t' || s[frnt] == '\n') && frnt < bck)
		frnt++;
	size = bck - frnt + 1;
	if ((new = (char *)malloc(sizeof(*new) * (size + 1))) == NULL)
		return (NULL);
	bck = 0;
	while (bck < size)
		new[bck++] = s[frnt++];
	new[bck] = '\0';
	return (new);
}
