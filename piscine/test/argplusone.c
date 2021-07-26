#include <stdio.h>

int	main(int argc, char *argv)
{
	if(argc == 2)
	{
		while(argv > 0)
		{
			argv--;
			printf("%d\n", argv);
		}

	}
	else
	{
		printf("Error: no argument supplied");
		return (0);
	}
}
