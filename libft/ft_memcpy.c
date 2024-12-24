
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *dest1;
	unsigned char *src1;

	dest1 = (unsigned char *) dest;
	src1 = (unsigned char *) src;
	while (n)
	{
		*dest1 = *src1;
		dest1++;
		src1++;
		n--;
	}
	return (dest);
}
/*
int	main(void)
{
	char src[30] = "hello every body";
	char dest[30];
	size_t n = 8;
	ft_memcpy(dest, src, n);
	dest[n] = '\0';
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}
*/