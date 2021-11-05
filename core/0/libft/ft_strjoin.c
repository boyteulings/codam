#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 || !s2)
		return (0);
	str = (char *) malloc(sizeof(ft_strlen(s1) + ft_strlen(s2) + 1));
	ft_strlcat((char *)s1, (char *)s2, ft_strlen(s1) + ft_strlen(s2));
	return (str);
	free(str);
}
