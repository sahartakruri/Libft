/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:48:50 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/06 17:46:26 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest1;
	unsigned char	*src1;

	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	if (dest1 == src1)
		return (dest);
	if (src1 < dest1)
	{
		while (n--)
		{
			dest1[n] = src1[n];
		}
	}
	else
	{
		while (n--)
		{
			*dest1 = *src1;
			dest1++;
			src1++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[20] = "Hello, World!";
	char	*str2;
	char	*str3;

	str3 = "cat";
	// Move a portion of the string within the same array
	//memmove(str, str3, 5); // Copies "Hello" to position 7 in the string
	printf("Result: %s\n", str); // Output: "HelloHello, World!"
	str2 = ft_memmove(str, str3, 5);
	printf("\n%s", str2);
	return (0);
}
*/