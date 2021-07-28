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
	(void)argc;
	write(1, argv[0], ft_strlen(argv[0]));
}
