#include <stdlib.h>
#include <stdio.h> /* REMOVE BEFORE TURNIN */
#include "libft.h" /* REMOVE */
#include "unistd.h" /* REMOVE */

/* notes:
 * splitcount should pass pointer to splits location?
 * use ft_substr
 */

static int	fn_wordcount(char const *s, char c)
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
array[row] = fn_strreturn;
row++;

array[row] = "\0";
*/

static int	fn_wordlen(char const *s, char c, int pos)
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
	//printf("%i", len);
	return (len);
}

static void	fn_freestuff(int row, char **array)
{
	while (row > 0)
	{
		free(array[row]);
		row--;
	}
	free(array);
}

static char	*fn_strreturn(char const *s, char c, int *posInString)
{
	int		i;
	int		si;
	char	*wrd;

	i = 0;
	si = *posInString;
	wrd = (char *)malloc(sizeof(char) * (unsigned long)(fn_wordlen + 1));
	if (!wrd)
		return (NULL);
	while (s[si] == c)
		si++;
	while (s[si])
	{
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
	//printf("%s \n", wrd);
	*posInString = si;
	return (wrd);
}

char	**ft_split(char const *s, char c)
{
	int		row;
	char	**array;
	int 	posInString;

	posInString = 0;
	array = (char **)malloc(sizeof(char *) * (fn_wordcount(s, c) + 1));
	if (!array)
		return (NULL);
	row = 0;
	while (row < fn_wordcount(s, c))
	{
		array[row] = fn_strreturn(s, c, &posInString);
		if (array[row] == NULL)
			fn_freestuff(row, array);
		row++;
	}
	array[row] = NULL;
	return (array);
}

// int	main()
// {
// 	char	*s;
// 	char	c;
// 	char **kaas;

// 	s = "      split       this for   me  !      ";
// 	c = ' ';
// 	kaas = ft_split(s, c);
// 	printf("ft_split output: %s- \n", kaas[0]);
// 	printf("ft_split output: %s- \n", kaas[1]);
// 	printf("ft_split output: %s- \n", kaas[2]);
// 	printf("ft_split output: %s- \n", kaas[3]);
// 	printf("ft_split output: %s- \n", kaas[4]);
// 	printf("ft_split output: %s- \n", kaas[5]);
// }



//string in positie 1 van dubbel array(row0), row++ en dan opnieuw

//hey ik wil gesplit worden\0
//0123456789
//hey\0
//ik\0
//wil\0
//gesplit\0
//worden\0
//\0
