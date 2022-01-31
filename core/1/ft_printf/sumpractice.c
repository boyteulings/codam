#include <stdarg.h>
#include <stdio.h>

int	sumreturn(int n, ...)
{
	va_list	args;
	int	sum;
	int	val;

	va_start(args, n);
	sum = 0;
	while (n > 0)
	{
		val = va_arg(args, int);
		sum += val;
		n--;
	}
	va_end(args);
	return (sum);
}

int	main(void)
{
	int	sum;

	sum = sumreturn(3, 40, 5, -3);
	printf("%d\n", sum);
	return 0;
}
