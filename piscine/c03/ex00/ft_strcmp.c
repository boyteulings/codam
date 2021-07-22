int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	spos;

	spos = 0;
	if (s1 == 0)
	{
		return (0);
	}
	while (s1[spos] != '\0')
	{
		if (s1[spos] != s2[spos])
		{
			spos++;
		}
		else if (s1 == s2)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
}
