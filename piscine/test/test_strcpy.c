#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*str;

	str = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (str);
}

int	main(void)
{
	char	src[] = "teststring";
	char	dest[10];

	printf("%s\n", ft_strcpy(dest, src));
	return (0);
}
