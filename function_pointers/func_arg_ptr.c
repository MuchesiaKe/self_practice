#include <stdio.h>

/**
*conditionalSum - modify the arguments according to the condition
*of the function ptr points to
*@a:argument for the ptr
*@b: argument for the ptr
*Return: sum of the value of a and b
**/

int conditionalSum(int a, int b, int (*ptr)())
{
	a = (*ptr)(a);
	b = (*ptr)(b);

	return a + b;
}

int square(int a)
{
	return (a * a);
}

int cube(int a)
{
	return a * a * a;
}

int main()
{
	int (*fp)(int);
	int sum;

	fp = square;
	sum = conditionalSum(2, 3, fp);
	printf("Square sum = %d\n", sum);

	fp = cube;
	sum = conditionalSum(2, 3, fp);
	printf("Cubic sum = %d\n", sum);
	return (0);
}
