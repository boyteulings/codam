#include "libft.h"

static int	ft_intlen(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*cnbr;
	int		intlen;

	nbr = n;
	intlen = ft_intlen(nbr);
	cnbr = malloc((intlen + 1) * sizeof(char));
	if (cnbr == 0)
		return (NULL);
	cnbr[intlen] = '\0';
	intlen--;
	if (nbr < 0)
	{
		cnbr[0] = '-';
		nbr = -nbr;
	}
	else if (nbr == 0)
		cnbr[0] = '0';
	while (nbr > 0 && intlen >= 0)
	{
		cnbr[intlen] = '0' + (nbr % 10);
		nbr /= 10;
		intlen--;
	}
	return (cnbr);
}
