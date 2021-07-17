#include <unistd.h>
#include <stdio.h>

void	printrow(char *argv);
void	colup(char n);
void	coldown(char n);
void	rowleft(char n);
void	rowright(char n);

char	*rem_space(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			str[j++] = str[i];
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

/*void	colup(char n)
{
	char *l1;

	l1 = &n;
	printf("%s", l1);
}

void	coldown(char n)
{
	char l1[3]={};

	l1 = n;
	printf("%s", l1);
}

void	rowleft(char n)
{
	char l1[3]={};

	l1 = n;
	printf("%s", l1);
}

void	rowright(char n)
{
	char *l1;

	l1 = &n;
	printf("%s", l1);
}
*/
void	printrow(char *argv)
{
	int	i;
	int j;
	int k;
	int l;
	char	colup[4];
	char	coldown[4];
	char	rowleft[4];
	char 	rowright[4];

	i = 0, j = 0, k = 0, l = 0;
	while (argv [i])
	{
		if (i <= 3)
		{
			//colup(argv [i]);
			colup[i] = argv[i];
			i++;
		}
		else if (i > 3 && i <= 8)
		{
			//coldown(argv [i]);
			colup[j] = argv[i];
			i++;
			j++;
		}
		else if (i > 9 && i <= 12)
		{
			//rowleft(argv [i]);
			colup[k] = argv[i];
			i++;
			k++;
		}
		else
		{
			//rowright(argv [i]);
			colup[l] = argv[i];
			i++;
			l++;
		}
	}
	printf("%s\n", colup);
	printf("%s\n", coldown);
	printf("%s\n", rowleft);
	printf("%s\n", rowright);


}

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

int	main(int argc, char	**argv)
{
	if (argc != 2)
	{
		write(1, "Invalid input", 13);
		return (1);
	}
	ft_check(argv[1]);
}
