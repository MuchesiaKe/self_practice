#include <stdio.h>

/**
*factorial - calculates factorial of given number recursively
*@n : number to calculate factorial
*Return : Value of factorial
**/

int long long factorial(int n)
{
	if (n <= 1)
		return (1);
	else
		return (n * factorial (n - 1));
}

/**
*main - program entrypoint
*Return: Always (0)
**/

int main(void)
{
	printf("Factorial: %lld\n", factorial (12));
	return (0);
}
