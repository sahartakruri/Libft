/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:50:05 by satakrur          #+#    #+#             */
/*   Updated: 2024/12/19 16:22:07 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	n;

	i = 0;
	j = 0;
	k = 0;
	while (dst[i] != '\0')
		i++;
	n = i;
	while (src[j] != '\0')
		j++;
	while (src[k] != '\0' &&  i < dstsize - 1)
	{
		dst[i] = src[k];
		k++;
		i++;
	}
	dst[i] = '\0';
	return (n + j);
}
/*
int	main(void)
{
	char	src[25] = " world ailhiu";
	char	dest[20] = "hello";
	unsigned int	size;

	size = 10;
	printf("%zu\n", ft_strlcat(dest, src, size));
//	printf("%lu\n", strlcat(dest, src, size));
	printf("%s", dest);
	return (0);
}
*/