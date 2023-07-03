#include <stdio.h>

/**
*main - Check output of code
*
*Return: Always (0)
**/

int main()
{
	int contestants[] = {1, 2, 3};
	int *choice = contestants;
	int i;

	contestants[0] = 2;
	contestants[1] = contestants[2];
	contestants[2] = *choice;
	printf("I'm going to pick contestant number %i\n", contestants[2]);
	for (i = 0; i < (int)(sizeof(contestants) / sizeof(int)); i++)
		printf("contestant[%d] : %d\n", i, contestants[i]);
	printf("contestants[1]: %d\n", contestants[1]);
	return (0);
}
