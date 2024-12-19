/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:07:28 by satakrur          #+#    #+#             */
/*   Updated: 2024/12/19 15:48:33 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (src[j] != '\0')
		j++;
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
/*
int	main(void)
{
	char	src[25] = " world ailhiu";
	char	dst[20] = "hello";
	size_t	size;

	size = 10;
	printf("%zu\n", ft_strlcpy(dst, src, size));
	//printf("%lu\n", strlcpy(dst, src, size));
	printf("%s", dst);
	return (0);
}
*/