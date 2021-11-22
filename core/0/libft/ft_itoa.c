#include <stdio.h> //remove before turn-in
#include <stdlib.h>
#include "libft.h"

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

int	ft_intlen(int n)
{
	if (n >= 1000000000 || n <= -1000000000)
		return (10);
	if (n >= 100000000 || n <= -100000000)
		return (9);
	if (n >= 10000000 || n <= -10000000)
		return (8);
	if (n >= 1000000 || n <= -1000000)
		return (7);
	if (n >= 100000 || n <= -100000)
		return (6);
	if (n >= 10000 || n <= -10000)
		return (5);
	if (n >= 1000 || n <= -1000)
		return (4);
	if (n >= 100 || n <= -100)
		return (3);
	if (n >= 10 || n <= -10)
		return (2);
	return (1);
}

char	*ft_itoa(int n)
{
	int		i;
	int		r;
	int		v;
	char	*nbr;

	i = ft_intlen(n) + 1;
	r = 0;
	v = 0;
	nbr = (char *) malloc(ft_intlen(n) + 1);
	while (i >= 0)
	{
		r = n % 10;
		nbr[i] = r + '0';
		i--;
		v = n / 10;
		nbr[i] = v + '0';
		i--;
	}
	nbr[ft_intlen(n)] = '\0';
	return (nbr);
}

int	main(void)
{
	int	n;

	n = 1;
	printf("-------\nOutput: %s \n", ft_itoa(n));
	printf("ft_intlen: %i \n", ft_intlen(n));
	return (0);
}
