#include <stdio.h>

int	main()
{
	int num, nth;
	printf("Enter number: ");
	scanf("%d", &num);
	printf("Enter nth: ");
	scanf("%d", &nth);
	if(num >> nth)
		printf("%d bit of %d is set", nth, num);
	else
		printf("%d bit of %d is unset", nth, num);
	return(0);
}
