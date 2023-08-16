#include <stdio.h>
#include <stdbool.h>

/**
*compare - compare function for integer array
*@a: individual elements of the array
*@b: element to search in the array
*Return: 1 if element  is found, 0 otherwise
**/

bool compare(const void *a, const void *b)
{
	return (*(int *)a == *(int *)b);
}

/**
*search - general search function to search an array
*for a given item
*@arr : array to search
*@arr_size: size of array
*@ele_size: size of individual element
*@x: pointer to element to search
*@compare: function to compare the elements
**/

int search(void *arr, int arr_size, int ele_size, void *x, bool compare(const void *, const void *))
{
	char *ptr = (char *)arr;

	int i;
	for (i = 0; i < arr_size; i++)
		if (compare(ptr + i * ele_size, x))
			return i;
	return (-1);
}

/**
*main - control program execution
*Return: 0 for success, non-zero otherwise
**/

int main(void)
{
	int arr[] = {2, 5, 7, 90, 70};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 90;
	printf("Returned index is %d \n", search(arr, n, sizeof(int), &x, compare));
	return (0);
}
