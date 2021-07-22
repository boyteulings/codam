#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = dest;
	while (*src != '\0' && i != n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (str);
}

int	main(void)
{
	char	src[] = "teststring";
	char	dest[10];
	unsigned int n;
	
	n = 5;
	printf("%s\n", ft_strncpy(dest, src, n));
	return (0);
}
