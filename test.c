#include<stdio.h>

void plus(int x, int y)
{
	return x + y;
}

int main()
{
	int hp = 1000;
	int value = plus(10, 90);

	printf("%d", value);
}
