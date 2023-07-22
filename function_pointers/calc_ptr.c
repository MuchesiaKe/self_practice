#include <stdio.h>

/**
*add - adds two integers
*@a: first integer
*@b: second integer
*Return: sum of a and b
**/

float add(float a, float b)
{
	return (a + b);
}

/**
*sub - subtracts two integers
*@a: first operand
*@b: second operand
*Return: value of a - b
**/

float sub(float a, float b)
{
	return (a - b);
}

/**
*mul - finds product
*@a: first operand
*@b: second operand
*Return : product of a and b
**/

float mul(float a, float b)
{
	return (a * b);
}

/**
*div - division of two integers
*@a: first operand
*@b: second operand
*Return: division of a and b
**/

float div(float a, float b)
{
	return (a / b);
}

/**
*main - controls program execution
*Return : 0 for success, non-zero for failure
**/

int main(void)
{
	float (*operator[])(float, float) = {add, sub, mul, div};
	float a, b;
	int i;

	printf("Enter two floats: ");
	scanf("%f%f", &a, &b);
	printf("Select operation:\n0.Add\n1.Substraction\n2.Multiplication\n3.Division");
	scanf("%d", &i);
	printf("Result is %f\n", (*operator[i])(a, b));
	return (0);
}
