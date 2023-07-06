#include <stdio.h>

/**
*main - illustrate pointer arithmetic
*Return: Always (0)
**/

int main(void)
{
	int a[] = {3, 2, 67, 0, 56};
	int *p;

	p = &a[3];
	printf("%d, %d, %d\n", *--p, *--p, *--p);
	return (0);
}
