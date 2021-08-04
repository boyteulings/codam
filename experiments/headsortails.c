#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

int	main(void)
{
	char	str;
	int	i;

	srand(time(0));
	i = 0;
	printf("heads or tails?\n");
	scanf("%s", &str);
	if (str != 0)
	{
		i = rand() % 2;
		printf("The result is: ");
		if (i == 0)
		{
			printf("tails!\n");
		}
		else if (i == 1)
		{
			printf("heads!\n");
		}
	}
	else
		printf("error");
}
