#include <unistd.h>

int	ft_check(char *argv);

int	main(int argc, char	**argv)
{
	if (argc != 2)
	{
		write(1, "Invalid input", 13);
		return (1);
	}
	ft_check(argv[1]);
}
