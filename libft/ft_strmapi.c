/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satakrur <satakrur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:52:19 by satakrur          #+#    #+#             */
/*   Updated: 2025/01/03 11:29:58 by satakrur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	j = 0;
	while (j <= i)
	{
		str[j] = f(j, s[j]);
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*
char	my_func(unsigned int index, char c)
{
	return (c + index);
}

int	main(void)
{
	char	*str;
	char	*result;

	str = "hello";
	result = ft_strmapi(str, my_func);
	if (result != NULL) {
		printf("Transformed string: %s\n", result);
		free(result);
	}
	return (0);
}
*/
