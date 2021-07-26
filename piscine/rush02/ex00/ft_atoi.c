int	ft_power(int	x)
{
	int	i;
	int	ans;

	i = 0;
	ans = 1;
	while (i < x)
	{
		ans *= 10;
		i++;
	}
	return (ans);
}

unsigned int	ft_atoi(char	*str)
{
	int	i;
	unsigned int	ans;
	int	j;
	int	num_len;

	i = 0;
	j = i;
	num_len = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num_len++;
		i++;
	}
	i = 0;
	ans = 0;
	while (i++ < num_len)
		ans = ans + ft_power(num_len - i) * (str[j + i - 1] - '0');
	return (ans);
}
