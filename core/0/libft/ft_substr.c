#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if ((size_t) ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	if (start >= (size_t) ft_strlen(s))
		return (ft_calloc(1, 1));
	str = (char *) malloc(len + 1);
	if (str == 0)
		return (NULL);
	while (s[i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
