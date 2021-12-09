#include <stdlib.h>

static int	fn_wordcount(char const *s, char c)
{
	int		i;
	int		splits;
	char	prevchar;

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

static int	fn_wordlen(char const *s, char c, int pos)
{
	int	len;

	len = 0;
	while (s[pos] == c && s[pos])
		pos++;
	while (s[pos] != c && s[pos])
	{
		pos++;
		len++;
	}
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
	wrd = (char *)malloc(sizeof(char) * (fn_wordlen(s, c, *posInString) + 1));
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
	*posInString = si;
	return (wrd);
}

char	**ft_split(char const *s, char c)
{
	int		row;
	char	**array;
	int		posInString;
	int		wc;

	wc = fn_wordcount(s, c);
	posInString = 0;
	array = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!array)
		return (NULL);
	row = 0;
	while (row < wc)
	{
		array[row] = fn_strreturn(s, c, &posInString);
		if (array[row] == NULL)
			fn_freestuff(row, array);
		row++;
	}
	array[row] = NULL;
	return (array);
}
/*
int	main()
{
 	char	*s;
 	char	c;
 	char 	**kaas;

 	s = "      split       this for   me  !      ";
 	c = ' ';
 	kaas = ft_split(s, c);
 	printf("ft_split output: %s- \n", kaas[0]);
 	printf("ft_split output: %s- \n", kaas[1]);
 	printf("ft_split output: %s- \n", kaas[2]);
 	printf("ft_split output: %s- \n", kaas[3]);
 	printf("ft_split output: %s- \n", kaas[4]);
 	printf("ft_split output: %s- \n", kaas[5]);
}
*/
