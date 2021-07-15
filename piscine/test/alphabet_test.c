#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	alphabet;

	alphabet = 'a';
	printf ("Here's the alphabet:\n");
	while (alphabet <= 'z')
	{
		printf("%c", alphabet);
		alphabet++;
	}
	return (0);
}
