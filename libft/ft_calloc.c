/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:46:52 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/03 11:25:10 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void	*s;
	size_t	i;

	s = malloc(num_elements * element_size);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < num_elements * element_size)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	int	i;
	int	*arr;
	int	*arr1;

	arr = (int *)ft_calloc(5, sizeof(int));
	arr1 = (int *)calloc(5, sizeof(int));
	if (arr == NULL)
	{
		printf("Memory allocation failed!\n");
		return (1);
		}
		i = 0;
		while (i < 5)
		{
		printf("arr[%d] = %d\n", i, arr[i]);
		printf("arr[%d] = %d\n", i, arr1[i]);
		i++;
		}
		free(arr);
		return (0);
}
*/
