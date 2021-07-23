int	ft_strlen(char *str)
{
	int	strlen;

	strlen = 0;
	while (*str != '\0')
	{
		str++;
		strlen++;
	}
	return (strlen);
}
