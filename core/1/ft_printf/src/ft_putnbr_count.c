/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_count.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:41:26 by bteuling      #+#    #+#                 */
/*   Updated: 2022/06/02 13:57:19 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// recursively divides & modulos n to be able to write it into 1
int	ft_putnbr_count(int n)
{
	char	nbr;

	if (n == -2147483648)
	{
		n = 147483648;
		return (write(1, "-2", 2));
	}
	else if (n < 0)
	{
		n = -n;
		return (write(1, "-", 1));
	}
	if (n >= 0 && n <= 9)
	{
		nbr = n + '0';
		return (write(1, &nbr, 1));
	}
	else
	{
		return (ft_putnbr_count(n / 10));
		return (ft_putnbr_count(n % 10));
	}
}
