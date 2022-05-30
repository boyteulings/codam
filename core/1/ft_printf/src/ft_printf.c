/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <bteuling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/23 18:00:39 by bteuling      #+#    #+#                 */
/*   Updated: 2022/05/30 17:17:26 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft_int.h"
/*
 optimization: store everything to be written in a string,
 and then write that at the end of main function.
 also allows for easier handling of errors because the whole string
 -is checked for validity before writing, instead of writing as you go
 */
// TODO: make custom libft functions that return the amount of bytes written

static int	iflist(char flag, va_list args)
{
	if (flag == 'c')
		return (ft_putchar_fd_int(va_arg(args, int), 1));
	if (flag == '%')
		return (ft_putchar_fd_int('%', 1));
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
			count += iflist(str[strpos + 1], args);
			strpos++;
		}
		else
			count += ft_putchar_fd_int(str[strpos], 1);
		strpos++;
	}
	va_end(args);
	return (count);
}

// REMOVE BEFORE TURN-IN
#include <stdio.h>

int	main(void)
{
	printf("\ncount: %d\n", ft_printf("12%c34%%56%c78%c9", 'a', 'X', 'i'));
	//printf("%%%");
	return (0);
}