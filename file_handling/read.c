#include <stdio.h>

/**
*main - simple read from a file
*Return: 0 on success, non-zero otherwise
**/

int main(void)
{
	FILE *fptr;

	fptr = fopen("filename.txt", "w");
	fprintf(fptr, "%s %s %s %d", "We", "are", "in", 2023);
	fputc('a', fptr);
	return (0);
}
