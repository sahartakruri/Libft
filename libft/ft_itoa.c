/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:47:36 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/03 11:25:48 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memoall(size_t i)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	return (str);
}

int	ft_is_neg(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

size_t	ft_count(int n)
{
	size_t	i;
	int		sign;

	i = 0;
	if (n < 0)
	{
		sign = -1;
		n *= sign;
	}
	else
		sign = 1;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	if (sign == -1)
		return (i + 1);
	return (i);
}

char	*ft_zeronum(int n)
{
	char	*str;

	if (n == 0)
	{
		str = ft_memoall(1);
		str[0] = '0';
	}
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*str;

	if (n == 0)
		return (ft_zeronum(n));
	i = ft_count(n);
	str = ft_memoall(i);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	if (ft_is_neg(n))
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[--i] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
/*
int	main(void)
{
	int	n = 1000;
	char	*str;

	str = ft_itoa(n);
	printf("%s",str);
	free(str);
	return (0);
}*/
