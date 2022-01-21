/* notes:
 * itoa base or putnbr base?
 */
#include <stdarg.h>

int	fn_flag(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	if (c[i] == '%')
	{
		i++;
		return (c[i])
	}
	else exit ()
}

int	ft_printf(const char *, ...)
{
	va_list	args;
	int		i;

	va_start(args,
}
