#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// trying to use recursivity to store int wincount and pass it back upon calling function
// segfault because wincount doesn't have a value at start

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}

int	coinflip(int wincount)
{
	char	*str;
	int	i;

	srand(time(0));
	i = 0;
	printf("heads or tails?\n");
	scanf("%s", str);
	while (wincount < 5)
	{	
		//if (str)
		//{
			i = rand() % 2;
			printf("The result is: ");
			if (i == 0)
			{
				printf("tails!\n");
				if (ft_strcmp(str, "tails") == 0)
				{
					printf("Your guess of %s was correct! :D\n", str);
					wincount++;
					main(wincount);
				}
				else
				{
					printf("Your guess of %s was incorrect :(\n", str);
					main(wincount);
				}
			}
			else if (i == 1)
			{
				printf("heads!\n");
				if (ft_strcmp(str, "heads") == 0)
				{
					printf("Your guess of %s was correct! :D\n", str);
					wincount++;
					main(wincount);
				}
				else
				{
					printf("Your guess of %s was incorrect :(\n", str);
					main(wincount);
				}
			}
		//}
		//else
		//	printf("error");
	}
}

int	main(void)
{
	int	wincount;

	wincount = 0;
	while(wincount < 5)
	{
		coinflip(wincount);
	}
	return (0);
}
