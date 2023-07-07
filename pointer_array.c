#include <stdio.h>
#include <stdlib.h>

/**
*main - illustrate diff between array and pointer
*Return: 0 for success, otherwise failure
**/

int main(void)
{
	int i;
	int arr[10];
	int *ptr;

	arr[0] = 42;
	arr[1] = 1337;
	arr[2] = -21;
	for (i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
	printf("Address of the array is %p\n", arr);
	printf("Size of the array: %zu\n", sizeof(arr));
	printf("arr = %p\n", arr);
	printf("&arr  = %p\n", &arr); 
	printf("arr + 1 = %p\n", arr + 1);
	printf("&arr + 1 = %p\n", &arr + 1);
	printf("(arr + 1) - arr = %d\n", (arr + 1) - arr);
	printf("(&arr + 1) - &arr = %d\n", (&arr + 1) - &arr);
	printf("\n\n\n");
 
	ptr =  alloca(sizeof(int) * 10);
	*(ptr + 0) = 42;
	*(ptr + 1) = 1337;
	*(ptr + 2) = -21; 
	for (i = 0; i < 10; i++)
		printf("%d\n", *ptr++);
	printf("Address of the fake array is %p\n", ptr);
	printf("Size of the fake array: %zu\n", sizeof(ptr));
	printf("ptr = %p\n", ptr);
	printf("&ptr  = %p\n", &ptr); 
	printf("ptr + 1 = %p\n", ptr + 1);
	printf("&ptr + 1 = %p\n", &ptr + 1);
	printf("(ptr + 1) - ptr = %d\n", (ptr + 1) - ptr);
	printf("(&ptr + 1) - &ptr = %d\n", (&ptr + 1) - &ptr);
	return (0);
}
