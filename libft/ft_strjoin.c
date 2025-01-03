/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:51:23 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/03 11:29:11 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1l;
	size_t	s2l;
	size_t	i;
	char	*new_s;

	s1l = ft_strlen(s1);
	s2l = ft_strlen(s2);
	new_s = (char *)malloc((s1l + s2l + 1) * sizeof(char));
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (i < s1l)
	{
		new_s[i] = s1[i];
		i++;
	}
	while (i < s1l + s2l)
	{
		new_s[i] = s2[i - s1l];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
/*
int	main(void)
{
	char	s1[20] = "hello";
	char	s2[20] = " everybody";
	char	*s3;

	s3 =ft_strjoin(s1, s2);
	printf("%s", s3);
	free (s3);
	return (0);
}
*/
