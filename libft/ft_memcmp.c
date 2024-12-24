
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1c;
	unsigned char	*s2c;
	size_t			i;

	s1c = (unsigned char *)s1;
	s2c = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1c[i] != s2c[i])
			return (s1c[i] - s2c[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*s1 = "hello everybody";
	char	*s2 = "hello world";
	int	n = 12;
	printf("%d", ft_memcmp(s1, s2, n));
	printf("\n%d", memcmp(s1, s2,n));
	return (0);
}
*/