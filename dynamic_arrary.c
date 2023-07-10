#include <stdio.h>
#include <stdlib.h>

/**
*main - creates array dynamically
*Return: 0 for success, non-zero for failure
**/

int main(void)
{
	int *arr;
	int n, i;

	printf("Enter number of elements in the array:");
	scanf("%d", &n);
	arr = (int *)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
		arr[i] = i + 1;
	while (*arr)
		printf("%d\n", *arr++);
	return (0);
}
