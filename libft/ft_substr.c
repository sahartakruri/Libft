/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:53:32 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/03 19:37:35 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*subs;

	if (start >= ft_strlen(s))
		return ((char *)ft_calloc(1, sizeof(char)));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	subs = (char *)malloc((len + 1) * sizeof(char));
	if (subs == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (i >= start && j < len)
		{
			subs[j] = s[i];
			j++;
		}
		i++;
	}
	subs[j] = '\0';
	return (subs);
}
/*
int	main(void) {
	char *s = "Hello, World!";
	char *substr = ft_substr(s, 7, 5);
	printf("Substring: %s\n", substr);
	free(substr);

	return (0);
}
*/