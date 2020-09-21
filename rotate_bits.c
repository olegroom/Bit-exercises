#include <stdio.h>

int	turn_left(int num, int unsigned rot);
int	turn_right(int num, unsigned int rot);

int	main()
{
	int num;
	unsigned int rot;
	printf("Input number = ");
	scanf("%d", &num);
	printf("Number of rotation = ");
	scanf("%u", &rot);

	printf("%d\n", turn_left(num, rot));
	printf("%d\n", turn_right(num, rot));
	return(0);
}

int	turn_right(int num, unsigned int rot)
{
//	rot = rot % 32;
	int res, lsb;
	while(rot--)
	{
		lsb = num & 1;
		num = num >> 1;
		num = num & ~(1 << 31);
		num = num | (lsb << 31);
	}
	return(num);
}

int	turn_left(int num, unsigned rot)
{
//	rot = rot % 32;
	int res, msb;
	while(rot--)
	{
		msb = (num >> 31) & 1;
		num = num << 1;
		res = num | msb;
	}
	return(res);
}

