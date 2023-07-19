#include <stdio.h>

/**
*fun - normal function with an int parameter
*@a: int to print
**/

void fun(int a)
{
	printf("Value of a is %d\n", a);
}

/**
*main - illustrate usage of function pointer
*Return: 0 for success, non-zero for failure
**/

int main()
{
	void (*func_ptr)(int) = fun;

	func_ptr(10);
	return (0);
}
