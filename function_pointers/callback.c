#include <stdio.h>

/**
*A - print Hello
**/

void A(void)
{
	printf("Hello\n");
}

/**
*B - callback function
*@ptr: function pointer to callback
**/
void B(void (*ptr)())
{
	ptr();
}

/**
*main - control execution
*Return: 0 for success, non-zero for failure
**/
int main(void)
{
	void (*p)() = A;

	B(p);
	B(A);
	return (0);
}
