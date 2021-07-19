#include <unistd.h>
#include <stdio.h>
#define N 4

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

void	printrow(char *argv)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	colup[4];
	char	coldown[4];
	char	rowleft[4];
	char	rowright[4];

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (argv [i])
	{
		if (i <= 3)
		{
			colup[i] = argv[i];
		}
		else if (i > 3 && i <= 8)
		{
			coldown[j] = argv[i];
			j++;
		}
		else if (i > 8 && i <= 12)
		{
			rowleft[k] = argv[i];
			k++;
		}
		else
		{
			rowright[l] = argv[i];
			l++;
		}
		i++;
	}
}
