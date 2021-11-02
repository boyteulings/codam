#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	indst;

	indst = ft_strlen(dst);
	i = 0;
	if (dstsize <= indst)
		return (ft_strlen(src) + dstsize);
	while (src[i] && indst + i < dstsize - 1)
	{
		dst[indst + i] = src[i];
		i++;
	}
	dst[indst + i] = '\0';
	return (ft_strlen(src) + indst);
}
