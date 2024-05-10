#include <stdio.h>

int sum(int, int);	// prototype

int main()
{
	printf("%d", sum(1, 2)); // first call
	printf("%d", sum(50, 2));// second call
	return 0;
}

int sum(int x, int y)	// definition
{
	int sum = x + y;
	return sum;
}