#include <stdlib.h>
#include <stdio.h> /* REMOVE BEFORE TURNIN */
#include "libft.h"

/* notes:
 * splitcount should pass pointer to splits location?
 * use ft_substr
*/


unsigned int	fn_splitcount(char const *s, char c)
{
	unsigned int	i;
	unsigned int	splits;

	i = 0;
	splits = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (i == ft_strlen(s))
			{
				if (
				return (splits);
			}
			i++;
			splits++;
		}
		i++;
	}
	return (splits);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	splitcount;
	unsigned int	chars;
	char			**str;

	i = 0;
	splitcount = fn_splitcount(s, c);
	chars = 0;
	while (s[i])
	{
		
	}
	str[splits][chars] = '\0';
}

int	main()
{
	char	*s;
	char	c;

	s = "hoixdoeixhoi";
	c = 'x';
	printf("%i \n", splitcount(s, c));
}
