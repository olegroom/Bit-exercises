#include <stdio.h>

int	main()
{
	int num, zeros = 0, ones = 0, i = 0;
	printf("Enter number: ");
	scanf("%d", &num);

	while(i < 32)
	{
		if((num >> i) & 1)
		{
			ones++;
		}
		else
		{
			zeros++;
		}
		i++;
	}

	printf("Total number of zeros: %d\n", zeros);
	printf("Total number of ones: %d\n", ones);
	return(0);
}
