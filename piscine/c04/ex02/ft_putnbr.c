#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	nbr;

	if (nb == -2147483648)
	{
		nb = 147483648;
		write(1, "-2", 2);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 0 && nb <= 9)
	{
		nbr = nb + '0';
		write(1, &nbr, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
