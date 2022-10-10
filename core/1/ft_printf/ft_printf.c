/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <bteuling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/23 18:00:39 by bteuling      #+#    #+#                 */
/*   Updated: 2022/10/10 16:31:36 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"

// #1: FIXME: hex should be treated as unsigned int
// #2: FIXME: null pointer in %s should print (null) instead of segfaulting
// #3: FIXME: free memory leaks in (nearly?) all functions
static int	conversions(char fmt, va_list args)
{
	const char	*base_ten = "0123456789";
	const char	*base_xl = "0123456789abcdef";
	const char	*base_xu = "0123456789ABCDEF";

	if (fmt == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	if (fmt == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	if (fmt == 'p')
		return (ft_putstr_fd(ft_strjoin("0x", ft_utoa_base(va_arg(args, \
		unsigned long long), 16, base_xl)), 1));
	if (fmt == 'd' || fmt == 'i')
		return (ft_putstr_fd(ft_itoa_base(va_arg(args, int), 10, base_ten), 1));
	if (fmt == 'u')
		return (ft_putstr_fd(ft_utoa_base(va_arg(args, \
		unsigned int), 10, base_ten), 1));
	if (fmt == 'x')
		return (ft_putstr_fd(ft_itoa_base(va_arg(args, int), 16, base_xl), 1));
	if (fmt == 'X')
		return (ft_putstr_fd(ft_itoa_base(va_arg(args, int), 16, base_xu), 1));
	if (fmt == '%')
		return (ft_putchar_fd('%', 1));
	return (0);
}

/**
 * @brief 42 version of libc's printf.
 * 
 * @param str string to write
 * @param ... variable amount of arguments, supports the following:
 * @param c prints a single character
 * @param s prints a string
 * @param p prints a void pointer's address
 * @param d prints a decimal number
 * @param i prints an integer in base 10
 * @param u prints an unsigned decimal
 * @param x prints a hexadecimal number
 * @param X prints a hexadecimal number in uppercase
 * @param % prints a percent sign
 * @return int – amount of bytes written
 */
int	ft_printf(const char *str, ...)
{
	va_list			args;
	unsigned int	strpos;
	int				count;

	strpos = 0;
	count = 0;
	va_start(args, str);
	while (str[strpos])
	{
		if (str[strpos] == '%')
		{
			count += conversions(str[strpos + 1], args);
			strpos++;
		}
		else
			count += ft_putchar_fd(str[strpos], 1);
		if (str[strpos])
			strpos++;
	}
	va_end(args);
	return (count);
}
