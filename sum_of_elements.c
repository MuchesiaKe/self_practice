#include <stdio.h>

/**
*sum_of_elements - calculate the sum of elements
*@arr: array to calculate sum
*@size: size of array
*Return: sum of elements
**/

int sum_of_elements(int arr[], int size)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < size; i++)
		sum += arr[i];
	return (sum);
}

/**
*main - control program execution
*Return: 0 for success, non zero for an error
**/

int main(void)
{
	int arr[] = {3, 5, 2, 5, 3};
	int size;

	size = sizeof(arr) / sizeof(arr[0]);
	printf("Sum of elements of the array is %d\n", sum_of_elements(arr, size));
	return (0);
}
