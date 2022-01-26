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

/*
	int nums[] = { 20, 31, -34, 234, 9484, -1 };

	sum += nums[n] // -> Same as va_arg(args, int);

	return type
	name
	params

	int (*f)(int, char, char*)

	int var = f(0, 'a', "Hello!");

	int add(int a, int b);
	int div(int a, int b);
	int mul(int a, int b);
	int mod(int a, int b);
	int sub(int a, int b);

	int do_op(int a, int b, int (*func)(int, int))
	{
		return (func(a, b));
	}

	do_op(78, 99, &sub)
	int (*func)(int, int)


	[d]

*/
}

/*
 * Frees n amount given pointers of any type.
 * 
 * @param[in] n The amount of pointers in the given list.
 * @returns Nothing.
 */
void free_n(int n, ...)
{
	va_list(ptrs);
	va_start(ptrs, n);
	while (n > 0)
	{
		free(va_arg(ptrs, void*));
		n--;
	}
	va_end(ptrs);
}

/**
 * Support int, char and string.
 * 
 * @param[in] fmt The formatting string, e.g: "Hell%c %s! I am %d years old!\n"
 * @Usage: ft_printf("Hell%c %s! I am %d years old!\n", 'o', "World", 21);
 */
void ft_printf(const char* fmt, ...)
{
	va_list(args);
	va_start(args, fmt);
	while (*fmt)
	{
		if (*fmt == 's')
		{
			ft_putstr()
		}
		if (*fmt == 'd')
		{
			ft_putnbr()
		}
		if (*fmt == 'c')
		{
			ft_putchar()
		}
		fmt++;
	}

	va_end(args);
}

int main(int argc, char const *argv[])
{
	const int sum = sumreturn(5, 1, 2, 3, 4, 5);
	char* a = malloc(12);
	int* b = malloc(12 * sizeof(int));
	float* c = malloc(12 * sizeof(float));
	double* d = malloc(12 * sizeof(double));
	free_n(4, a, b, c, d);
	free(d);
	printf("%d\n", sum);
	ft_printf("Hell%c %s! I am %d %s old!\n", 'c', "World!", 20, "years");
	return 0;
}
