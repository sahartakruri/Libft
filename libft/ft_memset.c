/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:07:31 by satakrur          #+#    #+#             */
/*   Updated: 2024/12/16 15:53:52 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr;
	size_t	i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[10];
	char	str2[ 10];
	int	c = 90;
	size_t n =5;

	printf ("%s",memset(str, c, n));
	printf("\n%s", ft_memset(str2, c, n));
	return (0);
}
*/