#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char *) src;
	d = (char *) dst;
	i = 0;
	if (src == NULL && dst == NULL)
		return (d);
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
