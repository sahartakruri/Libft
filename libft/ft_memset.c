/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:07:31 by satakrur          #+#    #+#             */
/*   Updated: 2024/12/16 15:53:52 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//void	*ft_memset(char *b, int c, size_t len)
//

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str;
	char	str2[ 100];
	int	c =3;
	size_t n =32;

	str = "hello everybody";
	memset(str, c, n);
	printf("%s", str);
	return (0);
}
