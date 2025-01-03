/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:48:36 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/03 20:00:58 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest1;
	unsigned char	*src1;

	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	if (dest1 != src1)
	{
		while (n)
		{
			*dest1 = *src1;
			dest1++;
			src1++;
			n--;
		}
	}
	return (dest);
}

/*
int	main(void)
{
	char	src[30] = "hello every body";
	char	dest[30];
	size_t	n;

	n = 8;
	ft_memcpy(dest, src, n);
	dest[n] = '\0';
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	return (0);
}
*/