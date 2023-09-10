#include <stdio.h>
#include <stdlib.h>

/**
*main - illustrate basic getline usage
*Return: 0 for success
**/

int main(void)
{
	char *buffer;
	size_t buffsize;

	buffer = malloc(sizeof(buffer));
	printf("$ ");
	getline(&buffer, &buffsize, stdin);
	printf("%s", buffer);
	return (0);
}
