/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 09:41:23 by ccastill          #+#    #+#             */
/*   Updated: 2017/07/11 20:36:56 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		num_words(char *str)
{
	int		count;

	count = 0;
	if (*str == '\0')
		return (count);
	else if (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
		if (*(str + 1) == '\0' || *(str + 1) == ' '
			|| *(str + 1) == '\t' || *(str + 1) == '\n')
			count++;
	return (count + num_words(str + 1));
}

static int		num_letters(char *str)
{
	int		count;

	count = 0;
	if (*str == '\0' || *str == ' ' || *str == '\t' || *str == '\n')
		return (count);
	else if (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
		count++;
	return (count + num_words(str + 1));
}

char			**ft_split_whitespaces(char *str)
{
	char	**array;
	int		word;
	int		letter;

	array = (char**)malloc(sizeof(char*) * (num_words(str) + 1));
	array[num_words(str) + 1] = 0;
	word = 0;
	while (*str != '\0')
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		array[word] = (char*)malloc(sizeof(char) * (num_letters(str) + 1));
		array[word][num_letters(str) + 1] = 0;
		letter = 0;
		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
		{
			array[word][letter] = *str;
			str++;
			letter++;
		}
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		word++;
	}
	return (array);
}
