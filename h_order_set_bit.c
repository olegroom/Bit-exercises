#include <stdio.h>

//highest order set bit

int	main()
{
	int num, res, i = 32, hsb;
	printf("Enter number: ");
	scanf("%d", &num);

	while(((num >> i) & 1) == 0)
		i--;
	hsb = i;
	printf("%d is highest order set bit of %d", hsb, num);

	return(0);
}
