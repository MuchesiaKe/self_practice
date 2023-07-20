#include <stdio.h>
#include <stdarg.h>

/**
*largest - finds the largest number
*@size: number of arguments
*Return: largest integer
**/

int largest(int size, ...)
{
	int i, max, x;
	va_list num;

	x = 0;
	max = 0;
	va_start(num, size);
	for (i = 0; i < size; i++)
	{
		x = va_arg(num, int);
		if (x > max)
			max = x;
	}
	va_end(num);
	return (max);
}

/**
*main - program entrypoint
*Return: 0 for success, non-zero for failure
**/

int main(void)
{
	printf("%d\n", largest(6, 3, 5, 10, 2, 4, 200));
	return (0);
}
