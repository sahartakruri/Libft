/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:47:54 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/03 11:26:31 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	r;

	str = (unsigned char *)s;
	r = (unsigned char)c;
	if (n == 0)
		return (0);
	while (n)
	{
		if (*str == r)
			return (str);
		str++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[30] = "hellooo everybody";
	char	*str2;
	char	*str3;
	int	c;
	size_t	n;

	c = 'v';
	n = 15;
	str3 = memchr(str, c, n);
	str2 = ft_memchr(str, c, n);
	printf("%s", str2);
	printf("\n%lld", str2 - str );
	printf("%s", str3);
	printf("\n%lld", str3 - str );
	return (0);
}*/
