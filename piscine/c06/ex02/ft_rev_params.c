#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	if (argc > 1)
	{
		while (argv[i] > 0)
		{
			write(1, argv[i], ft_strlen(argv[i]));
			write(1, "\n", 1);
			if (i > 1)
				i--;
			else
				return (0);
		}
	}
	else
	{
		return (0);
	}
}
