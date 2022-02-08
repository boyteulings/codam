#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

static	void	chararg(int n, ...)
{
	va_list	args;
	char	c;

	va_start(args, n);
	c = va_arg(args, int);
	putchar(c);
	write(1, "\n", 1);
	va_end(args);
	return ;
}

int	main(void)
{
	chararg('a');
	return 0;
}
