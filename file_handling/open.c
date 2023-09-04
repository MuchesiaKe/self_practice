#include <stdio.h>
#include <stdlib.h>

/**
*main - illustrate file opening
*Return: 0 for success, otherwise non-zero
**/

int main()
{
	FILE* fptr;

	fptr = fopen("filename.txt", "w");

	if (fptr == NULL)
	{
		printf("The file is not opened. The program will "
			"now exit.\n");
		exit (0);
	}
	else
	{
		printf("The file is created successfully.\n");
	}
	return (0);
}
