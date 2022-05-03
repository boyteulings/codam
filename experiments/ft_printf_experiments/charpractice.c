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
	while (n > 0)
	{
		c = va_arg(args, int);
		ft_putchar(c);
		write(1, "\n", 1);
		n--;
	}
	va_end(args);
	return ;
}

int	main(void)
{
	chararg(3, 'a', 'b', 'c');
	return (0);
}
