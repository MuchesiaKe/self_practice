#include <stdio.h>
#include <stdlib.h>

/**
*main - illustrate basic getline usage
*Return: 0 for success
**/

int main(void)
{
	char *buffer;
	size_t buffsize = 32;
	size_t characters;

	buffer = (char *)malloc(buffsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate buffer\n");
		exit(1);
	}
	printf("Type something: ");
	characters = getline(&buffer, &buffsize, stdin);
	printf("%lu characters were read.\n", characters);
	printf("You typed: '%s'\n", buffer);
	return (0);
}
