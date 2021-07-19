#include <unistd.h>

int		ft_check(char *argv);
char	*rem_space(char *str);
void	printrow(char *argv);

int	ft_check(char *argv)
{
	int	i;

	rem_space(argv);
	i = 0;
	while (argv [i])
	{
		if (argv [i] < '1' || argv [i] > '4')
		{
			write(1, "Input should be between 1 and 4\n", 32);
			return (0);
		}
		i++;
	}
	if (i != 16)
	{
		write(1, "Input should be 16 numbers\n", 27);
		return (0);
	}
	printrow(argv);
	return (1);
}
