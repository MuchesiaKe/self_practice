#include <stdio.h>

/**
*main - prints all the arguments without using ac
*Return: 0 for success
**/

int main(int ac, char **argv)
{
	(void) ac;

	while (*argv)
		printf("%s\n", *argv++);
	return (0);
}
