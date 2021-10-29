#include <stdlib.h>
#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	char	*str;
	int		i;

	str = dest;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (str);
}

char	*ft_strdup(const char *s1)
{
	char	*dst;

	dst = malloc(ft_strlen(s1) + 1);
	if (dst == NULL)
		return (NULL);
	ft_strcpy(dst, s1);
	return (dst);
}
