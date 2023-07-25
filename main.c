#include <stdio.h>

int test();
int factorial(int num);

int main()
{
	printf("%d\n", factorial(1));
	test();

	return 0;
}

int test()
{
	short x=-1000;
	unsigned char c='c';
	int y=20;
	int z;
	z = x + y;
	printf("%d, %d, %d, %c\n", x, y, z, c);

	return 0;
}

int factorial(int num)
{
	if(num==1){return 1;}
	return num * factorial(num-1);
}
