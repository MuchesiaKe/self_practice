#include <stdio.h>

/**
*fun1 - useless function
**/

void func1()
{
	printf("Fun1\n");
}

/**
*fun2 - another useless function
**/

void func2()
{
	printf("Func2\n");
}

/**
*wrapper - receives function as a parameter
*/

void wrapper(void (*fun)())
{
	fun();
}

/**
*main - control program execution
*Return: 0 for success, non-zero for failure
**/

int main()
{
	wrapper(func1);
	wrapper(func2);
	return (0);
}
