#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc < 2 || argc > 2)
	{
		write(1, "Argument error\n", 15);
		return (1);
	}
	else if (*argv[1] != '1')
	{
		write(1, "Input not 1\n", 12);
		return (1);
	}
	else if (*argv[1] == '1')
	{
		write(1, "1!\n", 3);
		return (0);
	}
	else
	{
		write(1, "error\n", 6);
		return (1);
	}
}
