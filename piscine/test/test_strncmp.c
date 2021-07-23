#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	spos;

	spos = 0;
	while (s1[spos] != '\0' && spos < n)
	{
		spos++;
		if (*s1 == 0)
		{
			return (0);
		}
		else if (s1[spos] != s2[spos])
		{
			return (1);
		}
	}
	return (0);
}

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "";
	s2 = "";
	printf("%d\n", ft_strncmp(s1, s2, 9));
	return (0);
}
