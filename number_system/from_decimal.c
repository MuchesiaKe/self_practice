#include <stdlib.h>
#include <stdio.h>

/**
*from_decimal - convert from decimal to specified base
*@decimal_num: number to convert from decimal
*@base: base to convert to
*Return: equivalent value in specified base for the number
**/

int *from_decimal(int decimal_num, int base)
{
	int i, quotient;
	int *rem;

	i = 1;
	quotient = decimal_num;
	while (quotient /= base)
		i++;
	rem = malloc(sizeof(*rem) * i);
	if (rem == NULL)
	{
		printf("Memory allocation failed\n");
	}
	quotient = decimal_num;
	for (i = 0; quotient != 0; i++)
	{
		rem[i] = quotient % base;
		quotient = quotient / base;
	}
	while(i >= 0)
	{
		printf("%d", rem[i]); 
		i--;
	}
	printf("\n");
	return (rem);
}

/**
*main - controls program execution
*Return: 0 on success, non-zero on failure
**/

int main(int argc, char **argv)
{
	int a, b;
	int *result;

	if (argc < 3)
	{
		printf("Usage: decimal_number base\n");
		printf("Enter number in base 10:\n");
		scanf("%d", &a);
		printf("Enter base to convert to:\n");
		scanf("%d", &b);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
	}
	result = from_decimal(a, b);
	free(result);
	return (0);
}
