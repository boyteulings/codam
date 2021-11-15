#include <stdlib.h>
#include "libft.h"

unsigned int	frontcount(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	fcount;

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
	//printf("%i \n", fcount);
	return (fcount);
}

unsigned int	backcount(char const *s1, char const *set)
{
	unsigned int	len;
	unsigned int	i;
	unsigned int	j;
	unsigned int	bcount;

	len = ft_strlen(s1) - 1;
	i = 0;
	j = 0;
	bcount = 0;
	while (len > 0)
	{
		j = 0;
		while (set[j])
		{
			if (s1[len] == set[j])
			{
				if (bcount == i)
				bcount++;
			}
			j++;
		}
		len--;
		i++;
	}
	//printf("%i \n", bcount);
	return (bcount);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	fcount;
	unsigned int	bcount;
	
	str = (char *) malloc(ft_strlen(s1));
	fcount = frontcount(s1, set);
	bcount = backcount(s1, set);

	str = ft_substr(s1, fcount, ft_strlen(s1) - fcount - bcount);
	return (str);
}

//int	main(void)
//{
//	printf("%s \n", ft_strtrim("akatsbbkasbbkasatsk", "kast"));
//}
//set: kas
//s1: akabergts
//
//substr gebruiken
//strlen en len--
