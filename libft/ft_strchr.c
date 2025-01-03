/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:28:45 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/03 18:13:02 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	k;

	k = 0;
	if (s == NULL)
		return (NULL);
	while (s[k] != '\0')
	{
		if (s[k] == (char)c)
			return ((char *)s + k);
		k++;
	}
	if (s[k] == (char)c)
		return ((char *)(s + k));
	return (NULL);
}
/*
int	main(void)
{
	printf("%s", ft_strchr("hello everyone", 'e'));
	printf("\n%s", strchr("hello everyone", 'e'));
	// when compiling use ft_strlen.c
	return (0);
}*/