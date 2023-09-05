#include <stdio.h>
#include <stdlib.h>

/**
*struct threeNum - structure of three integers
*@n1: first integer
*@n2: second integer
*@n3: third integer
**/

struct threeNum
{
	int n1, n2, n3;
};

/**
*main - write to binary file using fwrite
*Return: 0 on success, otherwise failure
**/

int main(void)
{
	int n, flag;
	struct threeNum num;
	FILE *fptr;

	if ((fptr = fopen("program.bin", "wb")) == NULL)
	{
		printf("Error! Opening file.\n");
		exit(1);
	}
	flag = 0;
	for (n = 1; n < 5; ++n)
	{
		num.n1 = n;
		num.n2 = 5 * n;
		num.n3 = 5 * n + 1;
		flag = fwrite(&num, sizeof(struct threeNum), 1, fptr);
	}
	if (!flag)
	{
		printf("Write Operation Failure.\n");
	}
	else
	{
		printf("Write Operation Successful.\n");
	}
	fclose(fptr);
	return (0);
}
