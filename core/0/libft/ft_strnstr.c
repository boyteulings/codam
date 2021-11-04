#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (ft_strlen(haystack) < 0 || ft_strlen(needle) == 0)
		return ((char *)haystack);
	if ((size_t)ft_strlen(needle) > len)
		return (0);
	while (haystack[i] && i < len)
	{
		if (ft_strncmp(&haystack[i], needle, ft_strlen(needle)) == 0)
		{
			if (i + ft_strlen(needle) > len)
				return (0);
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
