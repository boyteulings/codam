/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Boy Teulings <bteuling@student.codam.nl>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:46:24 by Boy Teulings      #+#    #+#             */
/*   Updated: 2022/05/12 17:58:22 by Boy Teulings     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"

// optimization: strchr for finding % and then - string to write in one go,
// -writing every character seperately is slower

// function for when format is c, should be moved to seperate files later
static int	fmt_c(char flag, va_list args)
{
	if (flag == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
	}
	return (0);
}

// function that returns the format specifier after the % sign
static char	returnfmt(char *str, int strpos)
{
	while (str)
	{
		if (str[strpos] == '%')
		{
			return (str[strpos + 1]);
			i++;
		}
		else
			i++;
	}
}

/* main function
 * TODO: add function in while loop that checks for and returns the character
 * -after a found percent sign
 */
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		strpos;

	strpos = 0;
	va_start(args, str);
	while (str[strpos])
	{
		if (str[strpos] == '%')
		{
			returnfmt(str, strpos)
			strpos++;
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

//REMOVE BEFORE TURN-IN
int	main(void)
{
	ft_printf("123456%c789", 'a');
	return (0);
}
