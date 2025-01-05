/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:50:26 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/05 17:19:16 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	ft_wordlength(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	*ft_wordcopy(char const *s, char c)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = ft_wordlength(s, c);
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_free(char **splitted, size_t n)
{
	while (n--)
	{
		free(splitted[n]);
	}
	free(splitted);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	array = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			array[j++] = ft_wordcopy(&s[i], c);
			if (!array[j - 1])
				return (ft_free(array, j), NULL);
			i += ft_wordlength(&s[i], c);
		}
	}
	array[j] = 0;
	return (array);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	**result;

// 	result = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
// 	printf("split:\n");
// 	for (int i = 0; result[i] != NULL; i++)
// 	{
// 		printf("Word: %s\n", result[i]);
// 	}
// }

/*
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
*/
/*
static int	ft_count(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
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
	int	k;

	k = 0;
	while (word_len > 0)
	{
		word[k] = s[i - word_len];
		k++;
		word_len--;
	}
	word[k] = '\0';
	return (word);
}

static char	**ft_free(char **arr, size_t i)
{
	while (i > 0)
	{
		i--;
		free(arr[i]);
	}
	free(arr);
	return (0);
}

static char	**ft_split_words(char const *s, char c, char **s2, int num_words)
{
	int	i;
	int	word;
	int	word_len;

	i = 0;
	word = 0;
	word_len = 0;
	while (word < num_words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		s2[word] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!s2)
			return (ft_free(s2, word), NULL);
		ft_putword(s2[word], s, i, word_len);
		word_len = 0;
		word++;
	}
	s2[word] = 0;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char			**s2;
	unsigned int	num_word;

	if (!s)
		return (0);
	num_word = ft_count(s, c);
	s2 = (char **)malloc(sizeof(char *) * (num_word + 1));
	if (!s2)
		return (0);
	s2 = ft_split_words(s, c, s2, num_word);
	return (s2);
}

#include <stdio.h>

int	main(void)
{
	char str[] = "Hello";
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