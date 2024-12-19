/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:22:26 by satakrur          #+#    #+#             */
/*   Updated: 2024/12/19 13:19:56 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	k;
	int	n;

	k = 0;
	n = 0;
	while (s[k] != '\0')
	{
		if (s[k] == c)
			n = k;
		k++;
	}
	return ((char *)s + n);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s", ft_strrchr("hello everyone", 'o'));
	printf("\n%s", strrchr("hello everyone", 'o'));
	return (0);
}
*/
