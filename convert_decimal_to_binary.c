#include <stdio.h>

int	main()
{
	int num, i = 31;
	printf("Input any number: ");
	scanf("%d", &num);

	while(i >= 0)
	{
		printf("%d", num >> i & 1);
		i--;
	}
	return(0);
}
