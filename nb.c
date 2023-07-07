#include <stdio.h>

/**
*print - illustrate recursion
*@nb - argument
*Return: value of recursion expression
**/

int print(int nb)
{
	if (nb < 0)
		return (0);
	printf("nb: %d, %d\n", nb, nb + print(nb - 1));
	nb--;
	return (nb);
}

/**
*main - program entrypoint
*Return: always (0)
**/

int main(void)
{
	print(4);
	return (0);
}
