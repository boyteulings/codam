int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	spos;

	spos = 0;
	while (s1[spos] != '\0')
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
