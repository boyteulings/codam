/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Boy Teulings <bteuling@student.codam.nl>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:46:24 by Boy Teulings      #+#    #+#             */
/*   Updated: 2022/05/17 20:03:13 by Boy Teulings     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft_int.h"

// optimization: strchr for finding % and then - string to write in one go,
// -writing every character seperately is slower
// TODO: make custom libft functions that return the amount of bytes written
// -not sure how to do this yet. How 2 use return value from a nested function?

// function for when format is c, should be moved to seperate files later
// FIXME: made when I didn't have returnfmt, so it doesn't work anymore
// TODO: possible fix: put all if statements here and let this handle
// -the flag if statements
static int	fmt_c(char flag, va_list args)
{
	int	count;

	count = 0;
	if (flag == 'c')
		count += ft_putchar_fd_int(va_arg(args, int), 1);
	return (count);
}

// function that returns the format specifier after the % sign
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

// main function
int	ft_printf(const char *str, ...)
{
	va_list			args;
	unsigned int	strpos;
	int	count;

	strpos = 0;
	count = 0;
	va_start(args, str);
	while (str[strpos])
	{
		if (str[strpos] == '%')
		{
			if (returnfmt(str, &strpos) == 'c')
			{
				write(1, "#", 1);
				count += fmt_c(str[strpos], args);
				strpos++;
			}
		}
		else
		{
			write(1, &str[strpos], 1);
		}
		strpos++;
	}
	va_end(args);
	return (0);
}

// REMOVE BEFORE TURN-IN
int	main(void)
{
	ft_printf("123456%c78%c9", 'X');
	return (0);
}
