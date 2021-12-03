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
	char			prevchar;

	prevchar = c;
	i = 0;
	splits = 0;
	while (s[i])
	{
		if (prevchar == c && s[i] != c)
			splits++;
		prevchar = s[i];
		i++;
	}
	return (splits);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	splits;
	char			*words;
	char			**str;

	i = 0;
	splits = fn_splitcount(s, c);
	while (
}



int	main()
{
	char	*s;
	char	c;

	s = "1 2 3";
	c = ' ';
	printf("%i \n", fn_splitcount(s, c));
}
