#include <stdio.h>

void add(int a, int b)
{
	printf("Addition is %d\n", a + b);
}

void substract(int a, int b)
{
	printf("Substraction is %d\n", a - b);
}

void mult(int a, int b)
{
	printf("Multiplication is %d\n", a * b);
}

int main()
{
	void (*func_ptr_arr[])(int, int) = {add, substract, mult};
	unsigned int ch, a = 15, b = 10;

	printf("Enter Choice: 0 for add, 1 for substract and 2 for multiply:\n");
	scanf("%ud", &ch);
	if (ch > 2)
		return (0);
	(*func_ptr_arr[ch])(a, b);
	return (0);
}
