/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/27 16:55:07 by bteuling      #+#    #+#                 */
/*   Updated: 2022/02/01 15:35:22 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* notes:
 * itoa base or putnbr base?
 * probably putnbr (no base?)
 * split up subfunctions for line savings
 * document everything!
 */

#include <stdarg.h>
//#include "libft.h"

static void	fmt_c(args)
{
	write(1, c, 1);
}

static char	returnfmt(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '%')
		i++;
	i++;
	return (s[i]);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, fmt);
	while (*fmt)
	{
		if (returnfmt(*fmt) == 'c')
			fmt_c(args, fmt);
	}
	return (i);
}

//DELETE BEFORE TURNIN
int	main(void)
{
	char	c;

	c = 'a';
	ft_printf("%c", c);
	return (0);
}