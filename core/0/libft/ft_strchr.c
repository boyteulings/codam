char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
