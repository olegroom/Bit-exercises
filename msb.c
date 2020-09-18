#include <stdio.h>

int	main()
{
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	if(num >> 31)
		printf("msb of %d is set", num);
	else
		printf("msb of %d is unset", num);
		
	return(0);
}
