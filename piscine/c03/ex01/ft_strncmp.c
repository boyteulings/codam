int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		n = n - 1;
		while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0' && n != 0)
		{
			s1++;
			s2++;
			n--;
		}
		if (*s1 == '\0' && *s2 == '\0')
		{
			return (0);
		}
		else
		{
			return (*s1 - *s2);
		}
	}
}
