#include <stdio.h>

int	main()
{
	int first, second, x;
	printf("Input first num: ");
	scanf("%d", &first);
	printf("Input second num: ");
	scanf("%d", &second);
	x = first ^ second;
	first = x ^ first;
	second = x ^ second;
	printf("first: %d\n", first);
	printf("second: %d\n", second);


	return(0);
}
