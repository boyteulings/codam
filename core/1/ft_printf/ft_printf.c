/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <bteuling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/23 18:00:39 by bteuling      #+#    #+#                 */
/*   Updated: 2022/06/28 15:22:29 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

/*
 optimization: store everything to be written in a string,
 and then write that at the end of main function.
 also allows for easier handling of errors because the whole string
 -is checked for validity before writing, instead of writing as you go
 */
// TODO: make custom libft functions that return the amount of bytes written
// TODO: make itoa_base and use that with makelower and makeupper

static int	conversions(char fmt, va_list args)
{
	if (fmt == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1));
	if (fmt == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	//if (fmt == 'd')
	//	return (ft_putnbr_fd(va_arg(args, int), 1));
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
		strpos++;
	}
	va_end(args);
	return (count);
}

// REMOVE BEFORE TURN-IN
#include <stdio.h>

int	main(void)
{
	printf("\ncount: %d\n", ft_printf("normal text %c %% %c %s %d", 'C', 'C', "string!", 42));
	//printf("%%%");
	return (0);
}
