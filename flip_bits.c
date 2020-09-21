#include <stdio.h>

int	main()
{
	int before;
	printf("Enter number: ");
	scanf("%d", &before);
	return(printf("%d", ~(before)));
}
