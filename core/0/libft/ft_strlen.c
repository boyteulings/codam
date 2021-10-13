int	ft_strlen(const char *s)
{
	unsigned int	strlen;

	strlen = 0;
	while (*s != '\0')
	{
		s++;
		strlen++;
	}
	return (strlen);
}
