/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:18:15 by satakrur          #+#    #+#             */
/*   Updated: 2024/12/19 13:15:16 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int n)
{
	if (n >= 0 && n <= 177)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char c = '\n';

	printf("%d", ft_isascii(c));
	return (0);
}*/
