#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}

int	main(void)
{
	char	*src;
	char	*dest;

	src = "string!";
	ft_strcpy(src, dest);
	write(1, &dest, 7);
	return (0);
}
