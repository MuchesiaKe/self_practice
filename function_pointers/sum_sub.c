#include <stdio.h>

/**
*sum - prints sum
**/

void sum(int a, int b)
{
	printf("Sum = %d\n", a + b);
}

/**
*sub - prints subtraction
**/

void sub(int a, int b)
{
	printf("Sub = %d\n", a - b);
}

/**
*display - accepts function pointer
**/

void display(void (*fptr)(int, int))
{
	fptr(3, 4);
}

int main(void)
{
	display(sum);
	display(sub);
	return (0);
}
