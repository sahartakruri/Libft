/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:47:08 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/05 19:02:31 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		if (result >= 9223372036854775807 && sign == -1)
			return (0);
		if (result >= 9223372036854775807)
			return (-1);
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str =  " +2147483555647ab567";
	printf("%d", ft_atoi(str));
	printf("\n%d",atoi(str));
	return (0);
}
*/