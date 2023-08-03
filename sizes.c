#include <stdio.h>
#include <string.h>

/**
*main - check size allocation
*Return: 0 for success, non-zero for failure
**/

int main(void)
{
	printf("%ld\n", sizeof("Best School"));
	printf("%ld\n", strlen("Best School"));
	return (0);
}
