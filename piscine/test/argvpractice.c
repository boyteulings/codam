#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argv == 1)
	{
		write(1, "1!\n", 3);
		return (0);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments\n", 19);
		return (1);
	}
	else if (argc < 2)
	{
		write(1, "No arguments\n", 13);
		return (1);
	}
	else if (**argv != 1)
	{
		write(1, "Input not 1\n", 12);
		return (1);
	}
	else
	{
		write(1, "error\n", 6);
		return (1);
	}
}
