#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (n > 0)
	{
		p[i] = 0;
		n--;
		i++;
	}
}
