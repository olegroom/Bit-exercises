#include <stdio.h>

int	main()
{
	int num, nth, res;
	printf("Enter number: ");
	scanf("%d", &num);
	printf("Enter nth bit to toggle: ");
	scanf("%d", &nth);

	res = num ^ (1 << (nth - 1));
	printf("%d", res);
	return(0);
}
