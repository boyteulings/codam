#include <unistd.h>

char	ft_print_string(int *int_array, char **char_array, int *array_out)
{
	int		i;
	int		j;
	char	*callptr;

	i = 0;
	while(array_out[i] != -1)
	{
		j = 0;
		callptr = ft_call(array_out[i], int_array, char_array);
		while(callptr[j] != '\0');
		{
			write(1, &callptr[j], 1);
			j++;
		}
		write(1, " ", 1);
		i++;
	}
}
