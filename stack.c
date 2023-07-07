#include <stdio.h>
#include <stdlib.h>

/**
*bar - declares and defines nb
**/

void bar()
{
	int nb;

	nb = 1337;
}

/**
*foo - declares and defines n
*Return: pointer to n
*/

int *foo()
{
	int *n;

	n = malloc(sizeof(int));
	*n = 42;
	return n;
}

int main()
{
	int *pn;

	pn = foo();
	printf("%d\n", *pn);
	bar();
	printf("%d\n", *pn);
	return (0);
}
