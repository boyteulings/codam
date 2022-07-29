/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <bteuling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/23 18:00:39 by bteuling      #+#    #+#                 */
/*   Updated: 2022/07/29 16:55:49 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"

/*
 optimization: store everything to be written in a string,
 and then write that at the end of main function.
 also allows for easier handling of errors because the whole string
 -is checked for validity before writing, instead of writing as you go
 */

static int	conversions(char fmt, va_list args)
{
	const char	*base_ten = "0123456789";
	const char	*base_xl = "0123456789abcdef";
	const char	*base_xu = "0123456789ABCDEF";

	if (fmt == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	if (fmt == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	if (fmt == 'd' || fmt == 'i')
		return (ft_putstr_fd(ft_itoa_base(va_arg(args, int), 10, base_ten), 1));
	if (fmt == 'u')
		return (ft_putstr_fd(ft_utoa_base(va_arg(args, unsigned int), 10, base_ten), 1));
	if (fmt == 'x')
		return (ft_putstr_fd(ft_itoa_base(va_arg(args, int), 16, base_xl), 1));
	if (fmt == 'X')
		return (ft_putstr_fd(ft_itoa_base(va_arg(args, int), 16, base_xu), 1));
	if (fmt == '%')
		return (ft_putchar_fd('%', 1));
	return (0);
}

/**
 * @brief Function that returns the format specifier after the percent sign
 * 
 * @param str pointer to string
 * @param strpos unsigned int which is the position in string
 * @return format specifier as char
 */

/*
static char	returnfmt(const char *str, unsigned int *strpos)
{
	while (str[*strpos])
	{
		if (str[*strpos] == '%')
		{
			return (str[*strpos + 1]);
			(*strpos)++;
		}
		else
			(*strpos)++;
	}
	return (0);
}
*/

// main function
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

int	main(void)
{
	// REMOVE MAIN BEFORE TURN-IN
	ft_printf("\ncount: %d\n", ft_printf("normal text %c %% %s %d %u %x %X", 'C', "string!", 42, 4294967295, 1194684, 1194684));
	//printf("%%%");
	return (0);
}
