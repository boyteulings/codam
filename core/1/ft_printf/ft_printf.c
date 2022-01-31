/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/27 16:55:07 by bteuling      #+#    #+#                 */
/*   Updated: 2022/01/31 16:45:45 by bteuling      ########   odam.nl         */
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

// int	fn_flag(char *c)
// {
// 	int	i;

// 	i = 0;
// 	while (c[i])
// 		i++;
// 	if (c[i] == '%')
// 	{
// 		i++;
// 		return (c[i])
// 	}
// 	else exit ()
// }

static char fn_fmt_c()

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
