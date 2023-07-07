#include <stdio.h>
#include <stdlib.h>

/**
*main - calculates sum of arguments
*@argc : number of arguments
*@argv : array of arguments
*Return: Always 0 for success, non-zero for failure
**/

int main(int argc, char **argv)
{
	int i, sum;

	printf("The total number of arguments is %d\n", argc);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
			sum += atoi(argv[i]);
		}
		printf("Sum of arguments is %d\n", sum);
	}
	else
		printf("Arguments less than two\n");
	return (0);
}
