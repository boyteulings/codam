#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdlib.h>

int	ft_atoi(char	*str);

int	*ft_str_to_num(char *str);
 
char    *ft_dict_string(int dictionary)
{
    char    *dict_contents;
    int     i;

    dict_contents = (char *)malloc(1000);
    i = 0;
    read(dictionary, &dict_contents[0], 1);
    i++;
    while(dict_contents[i - 1] != 0)
    {
        read(dictionary, &dict_contents[i], 1);
        i++;
    }
    dict_contents[i] = '\0';
    return (dict_contents);   
}

int	*ft_parse_int(char	*dict_str)
{
	int	i;
	int	j;
	int	k;
	int	*int_array;
	char	*temp_array;

	temp_array = (char *) malloc(sizeof(char) * 100);
	int_array = (int *) malloc(sizeof(int) * 100);
	i = 0;
	j = 0;
	while(dict_str[i] != '\0')
	{
		k = 0;
		while(dict_str[i] != ' ' && dict_str[i] != ':')
		{
			temp_array[k] = dict_str[i];
			i++;
			k++;
		}
		temp_array[k] = '\0';
		while(dict_str[i] != '\n')
		{
			i++;
		}
		i++;
		int_array[j] = ft_atoi(temp_array);
		j++;
	}
	return (int_array);
}

char *ft_call(int   num, int    *int_array, char    **char_array)
{
    int i;

    i = 0;
    while (num != int_array[i])
        i++;
    return (char_array[i]);
}

void	ft_print_string(int *int_array, char **char_array, int *array_out)
{
    int     i;
    int     j;
    char    *callptr;

    i = 0;
    while(array_out[i] != -1)
    {
        j = 0;
        callptr = ft_call(array_out[i], int_array, char_array);
        while(callptr[j] != '\0')
        {
            write(1, &callptr[j], 1);
            j++;
        }
        write(1, " ", 1);
        i++;
    }
}

char **ft_parse_char(char   *dict_str)
{
    int i;
    int j;
    int k;
    int a;
    char    **char_array;

    a = 0;
    i = 0;
    j = 0;
    k = 0;
    char_array = malloc(sizeof(char*) * 100);

    while (a < 100)
    {
        char_array[a] = malloc(sizeof(char) * 100);
        a++;
    }
    while (dict_str[i] != '\0')
    {
        while (dict_str[i] != ':')
            i++;
        i++;
        while (dict_str[i] == ' ')
            i++;
        k = 0;
        while (dict_str[i] != '\n')
        {
            char_array[j][k] = dict_str[i];
            i++;
            k++;
        }
        char_array[j][k] = '\0';
        i++;
        j++;
    }
    return (char_array);
}

int main(int    argc, char  **argv)
{
    int     dictionary;
    char    *dict_str;
    char    **char_array;
    int     *int_array;

    if (argc == 3)
        dictionary = open(argv[1], O_RDONLY);
    else if (argc == 2)
        dictionary = open("numbers.dict.txt", O_RDONLY);
    else
    {
        write(1, "Error\n", 6);
        return (0);
    }

    dict_str = ft_dict_string(dictionary);
    char_array = ft_parse_char(dict_str);    
    int_array = ft_parse_int(dict_str);
	if (argc == 3)
	{
		ft_print_string(int_array, char_array, ft_str_to_num(argv[2]));
	}
	else
	{
		ft_print_string(int_array, char_array, ft_str_to_num(argv[1]));
	}
}
