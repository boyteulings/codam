#include <stdio.h>

int	main(void)
{
	int marks[10], i, n, sum = 0, average;

	printf("Number of elements: ");
	scanf("%d", &n);

	for(i=0; i<n; ++i)
	{
		printf("Element%d: ",i+1);
		scanf("%d", &marks[i]);

		sum += marks[i];
	}

	average = sum/n;
	printf("Average = %d\n", average);

	return (0);
}
