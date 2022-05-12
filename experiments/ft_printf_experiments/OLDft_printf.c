/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Boy Teulings <bteuling@student.codam.nl>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:53:44 by Boy Teulings      #+#    #+#             */
/*   Updated: 2022/05/10 16:46:42 by Boy Teulings     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* notes:
 * itoa base or putnbr base?
 * probably putnbr (no base?)
 * split up subfunctions for line savings
 * document everything!
 */

#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"

static void	fmt_c(int n, ...)
{
	va_list	args;
	char	c;

	c = va_arg(args, int);
	ft_putchar_fd(c, 1);
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
		if (returnfmt(fmt) == 'c')
			write(1, "y", 1);
			//fmt_c(va_arg(args, int));
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
