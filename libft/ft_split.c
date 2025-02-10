/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 00:52:28 by dsedlets          #+#    #+#             */
/*   Updated: 2024/03/03 19:18:59 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * Разбивает строку на массив строк на основе разделителя, 
 * указанного в аргументе c.
 */

#include "libft.h"

static size_t	count_words(char const *s, char sep)
{
	unsigned int	words_count;
	unsigned int	i;

	i = 0;
	words_count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == sep)
			i++;
		if (s[i] && s[i] != sep)
			words_count++;
		while (s[i] && s[i] != sep)
			i++;
	}
	return (words_count);
}

static void	free_prev_words(char **words, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		free(words[i++]);
}

static int	separate_words(char const *s, char sep,
		size_t words_count, char **words)
{
	size_t		word_num;
	char const	*word_start;

	word_num = 0;
	while (*s && word_num < words_count)
	{
		while (*s && *s == sep)
			s++;
		if (*s && *s != sep)
			word_start = s;
		while (*s && *s != sep)
			s++;
		words[word_num] = ft_substr(word_start, 0, s - word_start);
		if (words[word_num] == NULL)
		{
			free_prev_words(words, word_num);
			return (0);
		}
		word_num++;
	}
	words[word_num] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	words_count;
	char	**words;

	if (s == NULL)
		return (NULL);
	words_count = count_words(s, c);
	words = (char **)malloc((words_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	if (!separate_words(s, c, words_count, words))
		return (NULL);
	return (words);
}
