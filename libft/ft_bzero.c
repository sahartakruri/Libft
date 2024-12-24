# include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char   *str;
    size_t    i;

    str = s;
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
 }

int main(void)
{
    char str[100] = "hello world";
    size_t n;
    n = 5;
    printf("%s, ft_bzero(str,n)");
    return (0);
}