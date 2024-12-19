/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:28:45 by satakrur          #+#    #+#             */
/*   Updated: 2024/12/19 13:19:23 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	k;

	k = 0;
	while (s[k] != '\0')
	{
		if (s[k] == c)
			break ;
		k++;
	}
	return ((char *)s + k);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s", ft_strchr("hello everyone", 'e'));
	printf("\n%s", strchr("hello everyone", 'e'));
	return (0);
}
*/
