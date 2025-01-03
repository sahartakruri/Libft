/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:28:45 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/03 20:04:47 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;
	int				k;

	k = 0;
	uc = (unsigned char)c;
	while (s[k] != '\0')
	{
		if ((unsigned int)s[k] == uc)
			return ((char *)s + k);
		k++;
	}
	if ((unsigned)s[k] == uc)
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