#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int		i;
	const unsigned char	*cs1;
	const unsigned char	*cs2;

	cs1 = s1;
	cs2 = s2;
	i = 0;
	while ((cs1 || cs2) && (n > 0))
	{
		if (cs1[i] != cs2[i])
			return (cs1[i] - cs2[i]);
		i++;
		n--;
	}
	return (0);
}
