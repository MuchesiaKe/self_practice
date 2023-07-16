#include <stdio.h>

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

int main(void)
{
	printf("%d\n", to_decimal(147, 16));
	return (0);
}
