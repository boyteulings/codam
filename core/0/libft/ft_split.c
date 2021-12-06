#include <stdlib.h>
#include <stdio.h> /* REMOVE BEFORE TURNIN */
#include "libft.h"

/* notes:
 * splitcount should pass pointer to splits location?
 * use ft_substr
*/


unsigned int	fn_wordcount(char const *s, char c)
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

/*
row = 0;
arr[row] = fn_strreturn;
row++;

arr[row] = "\0";
*/

int	fn_wordlen(char const *s, char c, int pos)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[pos] == c && s[pos] != '\0')
		pos++;
	while (s[pos] != c && s[pos] != '\0')
	{
		pos++;
		len++;
	}
	return (len);
}

char	*fn_strreturn(char const *s, char c, int pos)
{
	int	i;
	int	dc;
	int	si;
	char	*wrd;

	i = 0;
	dc = 0;
	si = pos;
	wrd = (char *)malloc(sizeof(char) * (unsigned long)(fn_wordlen + 1));
	i = 0;
	while (s[si] == c)
		si++;
	printf("%i, %s \n", si, s);
	while (s[si])
	{
		printf("%c", s[si]);
		if (s[si] != c)
		{
			wrd[i] = s[si];
			i++;
		}
		if (s[si] == c)
			break ;
		si++;
	}
	wrd[i] = '\0';
	printf("%s", wrd);
	return (wrd);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	row;
	char	*words;
	char	**array;
	array = (char **)malloc(sizeof(char *) * (fn_wordcount(s, c) + 1));
	i = 0;
	row = 0;
	while (row <= fn_wordcount(s, c))
	{
		array[row] = fn_strreturn(s, c, row);
		row++;
	}
	array[row] = '\0';
	return ((char)array);
}

int	main()
{
	char	*s;
	char	c;

	s = "2345         12345678  1234";
	c = ' ';
	printf("wordcount: %i \n", fn_wordcount(s, c));
	printf("wordlen: %d \n", fn_wordlen(s, c, 4));
	printf("ft_split output: %s \n", *ft_split(s, c));
}

//string in positie 1 van dubbel array(row0), row++ en dan opnieuw

//hey ik wil gesplit worden\0
//0123456789
//hey\0
//ik\0
//wil\0
//gesplit\0
//worden\0
//\0

