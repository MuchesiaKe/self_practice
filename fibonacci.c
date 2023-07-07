#include <stdio.h>

/**
*fibaonacci - calculate fibonacci of a number
*@n : number to calculate fibonacci
*Return: value of fibonacci
**/

int fibonacci(int n)
{
	if (n == 0)
		return (0);
	else if(n == 1)
		return (1);
	else
		return fibonacci(n - 1) + fibonacci(n - 2); 
}

/**
*main - program execution entrypoint
*Return: 0 for success, non-zero otherwise
**/

int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
		printf("Fibonacci %d: %d\n", i, fibonacci(i));
	return (0);
}
