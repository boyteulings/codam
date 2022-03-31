#include <stdarg.h>
#include <unistd.h>

static	void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static	void	chararg(int n, ...)
{
	va_list	args;
	char	c;

	va_start(args, n);
	c = va_arg(args, int);
	ft_putchar(c);
	write(1, "\n", 1);
	va_end(args);
	return ;
}

int	main(void)
{
	chararg('a');
	return (0);
}
