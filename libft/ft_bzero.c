/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:46:18 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/03 11:25:26 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n)
	{
		*str++ = 0;
		n--;
	}
}
/*
int	main(void)
{
	char str[100] = "helloooooooooooooo";
	size_t n;
	n = 5;
	ft_bzero(str, n);
	printf("%s", str);
	return (0);
}*/
