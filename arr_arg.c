#include <stdlib.h>
#include <stdio.h>

/**
*print_arr - print command line arguement
*@arr : array of commandline arguments
*@size: size of array
**/

void print_arr(int *arr, int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("%d \n", arr[i]);
}

/**
*main - store commandline arguments in an array
*@argc : argument counter
*@argv : argument vector
*Return: 0 for success, non-zero for error
**/

int main(int argc, char **argv)
{
	int *arg_arr, i;

	if (argc < 2)
	{
		printf("Provide atleast one int commandline argument\n");
		printf("Usage --> %s int...\n", argv[0]);
	}
	arg_arr = malloc(sizeof(int) * argc);
	for (i = 0; i < (argc - 1); i++)
	{
		arg_arr[i] = atoi(argv[i + 1]);
	}
	print_arr(arg_arr, (argc - 1));
	free(arg_arr);
	return (0);
}
