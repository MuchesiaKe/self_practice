#include <string.h>
#include <stdio.h>

/**
*main - illustrate strtok usage
*Return: 0 for success
**/

int main(void)
{
	char str[] = "Geeks-for-Geeks";

	char *token = strtok(str, " - ");
	
	while (token != NULL)
	{
		printf(" %s\n", token);
		token = strtok(NULL, " - ");
	}
	return (0);
}

