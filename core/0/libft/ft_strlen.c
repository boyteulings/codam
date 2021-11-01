int	ft_strlen(const char *s)
{
	int	strlen;

	strlen = 0;
	while (*s != '\0')
	{
		s++;
		strlen++;
	}
	return (strlen);
}
