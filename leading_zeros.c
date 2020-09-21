#include <stdio.h>

int	main()
{
	int num, leading, i = 31, b = 0;
	printf("Input number: ");
	scanf("%d", &num);

	if(num < 0)
	{
		printf("0");
		return(0);
	}
	if(num == 0)
	{
		printf("32");
		return(0);
	}
	while((num >> i) != 1)
	{
		i--;
		b++;
	}
	printf("%d", b);
	return(0);
}
