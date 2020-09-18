#include <stdio.h>

int	main()
{
	int num, res;
	printf("Enter number: ");
	scanf("%d", &num);

	res = 0;
	int i = 0;
	while(((num >> i) & 1) != 1)
			i++;
	res = i;
	printf("%d", res);
	return(0);
}
