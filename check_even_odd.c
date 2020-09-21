#include <stdio.h>

int	main()
{
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	//if lsb is 0 - even
	//if lsb is 1 - odd
	if(num & 1)
		printf("%d is odd number\n", num);
	else
		printf("%d is even number\n", num);

	return(0);
}
