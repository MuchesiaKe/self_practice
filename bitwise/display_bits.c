#include <stdio.h>

void displayBits(unsigned int value);

/**
*main - controls program execution
*Return: 0 for success, non-zero otherwise
**/

int main(void)
{
	unsigned int x;

	printf("%s", "Enter a nonnegative int: ");
	scanf("%u", &x);

	displayBits(x);
	return (0);
}


/**
*displayBits - display bits of an unsigned int value
*@value: value to display in bits
**/

void displayBits(unsigned int value)
{
	unsigned int c,  displayMask;

	displayMask = 1 << 31;
	printf("%10u = ", value);
	for (c = 1; c <= 32; ++c)
	{
		putchar(value & displayMask ? '1' : '0');
		value <<= 1;

		if (c % 8 == 0)
			putchar(' ');
	}
	putchar('\n');
}

