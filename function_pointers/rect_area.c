#include <stdio.h>

/**
*rect_area - compute area of a rectangle
*@length : length of the rectangle
*@breadth : breadth of the rectangle
*Return : area of the rectangle
**/

float rect_area(float length, float breadth)
{
	return (breadth * length);
}

/**
*main - control program execution
*Return: 0 for success, non-zero for failure
**/

int main(void)
{
	float length, breadth;
	float (*area_ptr)(float, float);

	area_ptr = rect_area;
	printf("Enter length and breadth: ");
	scanf("%f%f", &length, &breadth);
	printf("Area = %f\n", (*area_ptr)(length, breadth));
	return (0);
}
