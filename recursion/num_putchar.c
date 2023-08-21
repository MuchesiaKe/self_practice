#include "num_printer.h"

/**
*num_putchar - prints integer with putchar
*@num: integer to print
**/

int num_putchar(int num)
{
	if (num == 0)
	{
		_putchar(num + '0');
		return (1);
	}
	_putchar('0' + (num % 10));
	return(num_putchar (num / 10) + 1);
}

/**
*num_loop - print number with loop
*Return: number of printed digits
**/

int while_loop(int num)
{
	int i, rev;

	i = rev = 0;
	while (num / 10 || num % 10)
	{
		rev = (rev * 10) + (num % 10);
		num /= 10;
	}
	while (rev / 10 || rev % 10)
	{
		_putchar('0' + (rev % 10));
		rev /= 10;
		i++;
	}
	_putchar('\n');
	return (i);
}


/**
*main - control program execution
*Return: 0 for success, non-zero for otherwise
**/

int main(void)
{
	_putchar('0' + while_loop(43239));
	_putchar('\n');
	return (0);
}
