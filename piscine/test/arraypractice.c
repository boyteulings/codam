#include <unistd.h>

int	main(void)
{
	char	str[] = "0123";
	write(1, &str[2], 1);
	return (0);
}
