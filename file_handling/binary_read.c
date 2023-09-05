#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
	int n1, n2, n3;
};

/**
*main - read from a binary file using fread()
*Return: 0 for success, otherwise non-zero
**/

int main(void)
{
	int n;
	struct threeNum num;
	FILE *fptr;
	if ((fptr = fopen("program.bin", "rb")) == NULL)
	{
		printf("Error! Opening file.\n");
		exit (1);
	}
	for (n = 1; n < 5; ++n)
	{
		fread(&num, sizeof(struct threeNum), 1, fptr);
		printf("n1: %d\t n2:%d\t n3:%d\n", num.n1, num.n2, num.n3);
	}
	fclose(fptr);
	return (0);
}
