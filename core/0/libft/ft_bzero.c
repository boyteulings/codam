#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		*s[i] = 0;
		n--;
		i++;
	}
	return (0);
}
