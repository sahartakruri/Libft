/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:22:26 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/03 18:30:39 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				k;
	int				n;
	unsigned char	nc;

	nc = (unsigned char)c;
	k = 0;
	n = -1;
	if (s == NULL)
		return (NULL);
	while (s[k] != '\0')
	{
		if (s[k] == nc)
			n = k;
		k++;
	}
	if (nc == '\0')
		return ((char *)s + k);
	if (n == -1)
		return (NULL);
	return ((char *)s + n);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s", ft_strrchr("hello everyone", '\0'));
	printf("\n%s", strrchr("hello everyone", '\0'));
	return (0);
}
*/