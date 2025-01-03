/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:49:51 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/03 11:28:39 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	size_t	i;
	char	str[12];

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	if (n < 0 && n != -2147483648)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n == 0)
		write(fd, "0", 1);
	i = 0;
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	while (i-- > 0)
		write(fd, &str[i], 1);
}
/*
int	main(void)
{
	int	n;

	n = 0;
	ft_putnbr_fd(n, 1);
	return (0);
}
*/
