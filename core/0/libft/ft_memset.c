#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*p;

	p = b;
	i = 0;
	while (i < len)
	{
		*p = c;
		p++;
		i++;
	}
	return (b);
}
