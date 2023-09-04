#include <stdio.h>
#include <stdlib.h>

/**
*main - illustrate file opening
*Return: 0 for success, otherwise non-zero
**/

int main()
{
	FILE* fptr;

	fptr = fopen("filename.txt", "r");

	if (fptr == NULL)
	{
		printf("The file is not opened. The program will "
			"now exit.\n");
		exit (0);
	}
	return (0);
}
