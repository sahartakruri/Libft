/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:50:26 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/03 19:30:47 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			n++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (n);
}

static char	*ft_putword(char *word, char const *s, int i, int word_len)
{
	size_t	k;

	k = 0;
	while (word_len > 0 && s[i] != '\0' )
	{
		word[k] = s[i];
		k++;
		word_len--;
		i++;
	}
	word[k] = '\0';
	return (word);
}

static char	*ft_memall(size_t word_len)
{
	char	*word;

	word = (char *)malloc(sizeof(char) * (word_len + 1));
	if (word == NULL)
		return (NULL);
	return (word);
}

static void	ft_free(char **arr, size_t i)
{
	while (i--)
		free(arr[i]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	word;
	size_t	word_len;
	char	**arr;

	i = 0;
	word = 0;
	arr = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (arr == NULL)
		return (NULL);
	while (word++ < ft_count(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		word_len = 0;
		while (s[i + word_len] != '\0' && s[i + word_len] != c)
			word_len++;
		arr[word - 1] = ft_memall(word_len);
		ft_putword(arr[word - 1], s, i, word_len);
		if (arr[word - 1] == NULL)
			return (ft_free(arr, word - 1), NULL);
		i += word_len;
	}
	arr[word - 1] = NULL;
	return (arr);
}
/*
int	main(void)
{
	char str[] = "Hello,   how are you doing today?";
	char delimiter = ' ';
	char **words;
	size_t i;

	words = ft_split(str, delimiter);
	if (words == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	i = 0;
	while (words[i] != NULL)
	{
		printf("Word %zu: %s\n", i + 1, words[i]);
		i++;
	}
	i = 0;
	while (words[i] != NULL)
	{
		free(words[i]);
		i++;
	}
	free(words);
	return (0);
}*/