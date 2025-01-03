/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:48:50 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/03 20:02:59 by satakrur         ###   ########.fr       */
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
int	main(void) {
	char str[20] = "Hello, World!";
	char *str2;

	// Move a portion of the string within the same array
	memmove(str + 7, str, 5);  // Copies "Hello" to position 7 in the string

	printf("Result: %s\n", str);  // Output: "HelloHello, World!"
	str2 = memmove(str + 7, str, 5);
	printf("\n%s", str2);

	return (0);
}
*/