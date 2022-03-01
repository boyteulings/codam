#include <stdio.h>

static char returnfmt(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '%')
		i++;
	i++;
	return (s[i]);
}

int	main(void)
{
	char	*s;

	s = "etasefiaesfj %x";
	printf("%c\n", returnfmt(s));
	return (0);
}