/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:49:33 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/03 11:29:51 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (needle[k] != '\0')
		k++;
	if (k == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		while (haystack[i] == needle[j] && needle[j] != '\0' && i < len)
		{
			j++;
			i++;
		}
		if (j == k)
			return ((char *)haystack + i - j);
		i++;
		j = 0;
	}
	return (0);
}
/*
int	main(void)
{
	char	to_find[] = "llo";
	int		n;

	char	str[] ="hello everyone!! lsj every";
	n = 10;
	printf("%s", ft_strnstr(str, to_find, n));
	printf("\n%s", strnstr(str, to_find, n));
	return (0);
}
*/