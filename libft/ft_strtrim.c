/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:53:20 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/03 19:32:35 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char const *set, char const c)
{
	int	i;

	i = 0;
	while (set[i] != 0)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_start(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start] != '\0' && ft_check(set, s1[start]))
		start++;
	return (start);
}

static size_t	ft_end(char const *s1, char const *set, size_t start)
{
	size_t	end;
	size_t	len;

	len = ft_strlen(s1);
	end = len - 1;
	while (end > start && ft_check(set, s1[end]))
		end--;
	return (end);
}

static char	*ft_special(void)
{
	char	*s2;

	s2 = (char *)malloc(1 * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	s2[0] = '\0';
	return (s2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	size_t	i;
	char	*s2;

	start = ft_start(s1, set);
	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	if (start == len)
		return (ft_special());
	end = ft_end(s1, set, start);
	s2 = (char *)malloc((end - start + 2) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
		s2[i++] = s1[start++];
	s2[i] = '\0';
	return (s2);
}
/*
int	main(void)
{
	char	s[25] = "hello everybody and olla";
	char	set[10] = "hea";
	char	*news;
	news = ft_strtrim(s, set);
	if (news != NULL)
		printf("%s", news);
	free (news);
	return (0);
	// you have to add ft_strlen.c while compiling
}*/