/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 21:46:44 by ccastill          #+#    #+#             */
/*   Updated: 2018/03/26 21:46:47 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					**ft_strsplit(char const *s, char c)
{
	int		words;
	int		pos;
	int		let;
	char	**new_str;

	if (!s || !(new_str = (char **)malloc(sizeof(*new_str) *
		(ft_count_words(s, c) + 1))))
		return (NULL);
	words = -1;
	pos = 0;
	while (++words < ft_count_words(s, c))
	{
		let = 0;
		if (!(new_str[words] = ft_strnew(ft_word_len(&s[pos], c) + 1)))
			new_str[words] = NULL;
		while (s[pos] == c)
			pos++;
		while (s[pos] != c && s[pos])
			new_str[words][let++] = s[pos++];
		new_str[words][let] = '\0';
	}
	new_str[words] = 0;
	return (new_str);
}
