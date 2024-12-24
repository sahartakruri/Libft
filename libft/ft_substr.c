
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t length;
	char *subs;

	if (s == NULL)
		return (NULL);
	length = ft_strlen(s);
	if (start > length)
		return (NULL);
	if (length - start < len)
		len = length - start;
	subs = (char *)malloc((len + 1) *sizeof(char));
	if (subs == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		subs[i] = s[i + start];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}


