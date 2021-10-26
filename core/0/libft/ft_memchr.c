#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long			i;
	const unsigned char		*cs;
	unsigned char			cc;

	cs = s;
	cc = c;
	i = 0;
	while (n > 0)
	{
		if (cs[i] == cc)
			return ((char *)&s[i]);
		i++;
		n--;
	}
	return (0);
}
