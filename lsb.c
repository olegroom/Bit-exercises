#include <stdio.h>

int	main()
{
	int num;
	scanf("%d", &num);
	if(num & 1)
		printf("lsb is set");
	else
		printf("lsb is unset");
	return(0);
}
