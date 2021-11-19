#include <stdio.h> //remove before turn-in
#include <stdlib.h>

/*

char	*ft_itoa(int n)
{
	char	*nbr;
	int		i;

	i = 0;
	if (n == -2147483648)
	{
		nbr = "-2147483648";
		return (nbr);
	}
	else if (n < 0)
	{
		nbr[0] = '-';
		i = 1;
	}
	if (n >= 0 && n <= 9)
	{
		nbr = n + '0';
		return (nbr);
	}
	else if (n < 0 && n > 9)
	{
		(n / 10);
		(n % 10);
	}
}

*/

char *ft_itoa(int n)
{
	int		i;
	int		r;
	int		v;
	char	nbr;

	i = 0;
	r = 0;
	v = 0;
	r = n % 10;
	nbr[i] = r + '0';
	i--;
	v = n / 10;
	nbr[i] = v + '0';
	i--;
}

int	main(void)
{
	int	n;

	n = -2;
	printf("%c \n", ft_itoa(n));
	return (0);
}
