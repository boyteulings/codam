#include <unistd.h>
#include <stdio.h>

int	ft_isascii(int c);

int	main(void)
{
	char	c;

	c = '}';
	printf("%d\n", ft_isascii(c));
	return (0);
}
