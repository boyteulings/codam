#include <stdio.h>

int	frontcount(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	fcount;

	i = 0;
	j = 0;
	fcount = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				if (fcount == i)
					fcount++;
			}
			j++;
		}
		i++;
	}
	return (fcount);
}

int	main(void)
{
	printf("%i \n", ft_strtrim("akabargts", "kas"));
}
//set: kas
//s1: akabergts
//
//substr gebruiken
//strlen en len--
