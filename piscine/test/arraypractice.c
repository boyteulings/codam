#include <unistd.h>

int	main(void)
{
	char	str[] = "test";
	write(1, &str, 4);
	return (0);
}
