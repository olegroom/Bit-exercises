#include <stdio.h>

int	main()
{
	int num, nth, res;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("Enter the nth bit you want to set: ");
	scanf("%d", &nth);
	res = num | (1 << (nth - 1)); 
	printf("%d", res);
	return(0);
}
