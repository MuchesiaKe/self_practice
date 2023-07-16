#include <stdio.h>
#include <stdlib.h>

/**
*to_decimal - converts from other bases to decimal
*@number: number in other base
*@base: base to convert to
*Return: int equivalent to the specified base
**/

int to_decimal(int number, int base)
{
	int i, j, sum, quotient, powered;

	sum = 0;
	quotient = number;
	for (i = 0; quotient != 0; i++)
	{
		powered = 1;
		if (i == 0)
			powered = 1;
		else
		{
			for (j = 0; j < i; j++)
			{
				powered *= base;
			}
		}
		sum += ((quotient % 10) * powered);
		quotient /= 10;
	}
	return (sum);
}

/**
*main - program entrypoint
*Return: 0 for success, non-zero for failure
**/

int main(int argc, char **argv)
{
	int a, b;

	if (argc < 3)
	{
		printf("Usage: number base\n");
		printf("Enter number to convert to decimal:\n");
		scanf("%d", &a);
		printf("Enter the base of the entered number:\n");
		scanf("%d", &b);
	}

	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
	}
	printf("%d base %d to decimal is %d\n", a, b, to_decimal(a, b));
	return (0);
}
