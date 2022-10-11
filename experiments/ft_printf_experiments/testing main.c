// copy this in the ft_printf.c file for testing
#include <stdio.h>
int	main(void)
{
	int	i = 100;
	unsigned int	x = 4294967295;
	int	*ptr = &i;
	unsigned int u = 4294967295;

	ft_printf("\ni: %p\n", &i);
	ft_printf("\nMy version of printf:\n");
	printf("\nFTcount: %d\n\n", ft_printf("normal text %c %% %s %p %d %u %x %X", 'C', "string!", ptr, 42, u, x, x));
	ft_printf("\nglibc printf:\n");
	printf("\ncount: %d\n", printf("normal text %c %% %s %p %d %u %x %X", 'C', "string!", ptr, 42, u, x, x));
	ft_printf("\nMore tests:\n");
	ft_printf("[%s]-[%s]-[%s]-[%s]", " <> ", "", " ", "> ");
	ft_printf("\nmax and min int: %d %d", 2147483647, -2147483648);
	return (0);
}