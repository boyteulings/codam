#include <stddef.h>
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	i = 0;
	n = 0;
	if (needle == 0)
		return (haystack);
	while (haystack[h] != '\0')
	{
		if (haystack[h] == needle[0])
		{
			while (haystack[h] == needle[n + h])
			{
				h++;
				n++;
			}
		}
		h++;
	}
}
