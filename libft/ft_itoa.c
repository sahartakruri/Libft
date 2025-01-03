/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:47:36 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/03 16:59:43 by satakrur         ###   ########.fr       */
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

char	*ft_special(void)
{
	char	*str;

	str = ft_memoall(1);
	if (str == NULL)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_special2(void)
{
	char	*str;

	str = ft_memoall(11);
	if (str == NULL)
		return (NULL);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*str;

	if (n == 0)
		return (ft_special());
	if (n == -2147483648)
		return (ft_special2());
	i = ft_count(n);
	str = ft_memoall(i);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	if (n < 0)
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
	int		n;
	char	*str;

	n = -2147483648;
	str = ft_itoa(n);
	printf("%s",str);
	free(str);
	return (0);
}
*/