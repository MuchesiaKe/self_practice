#include <stdio.h>
#include <stdlib.h>

/**
*main - write arguements supplied to main to stdout
*@argc : number of arguments
*@argv : array of arguments
*Return: 0 for success, non-zero otherwise
**/

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
