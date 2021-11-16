#include <stdio.h>

char	ft_itoa(int n)
{
	char	*nbr;

	if (n == -2147483648)
	{
		n = -2147483648;
		return (n);
	}
	else if (n < 0)
	{
		//write(fd, "-", 1);
		n = -n;
	}
	if (n >= 0 && n <= 9)
	{
		nbr = n + '0';
		return (nbr);
	}
	else
	{
		ft_itoa(n / 10);
		ft_itoa(n % 10);
	}
}

int	main(void)
{
	int	n;

	n = 22;
	printf("%c \n", ft_itoa(n));
	return (0);
}
