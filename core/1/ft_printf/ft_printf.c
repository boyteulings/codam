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


// 		return (c[i])
// 	}
// 	else exit ()
// }

static char returnfmt(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '%')
	{
		i++;
	}
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
		if (*fmt == 'c')
			fn_fmt_c(args, fmt);
	}
	return (i);
}
// int	fn_flag(char *c)
// {
// 	int	i;

// 	i = 0;
// 	while (c[i])
// 		i++;
// 	if (c[i] == '%')
// 	{
// 		i++;