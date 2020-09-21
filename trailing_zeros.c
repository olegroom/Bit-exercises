#include <stdio.h>

int	main()
{
	int num, zeros, i = 0;
	printf("Enter num: ");
	scanf("%d", &num);

	while(((num >> i) & 1) != 1)
		i++;	
	printf("%d", i);
	return(0);
}
