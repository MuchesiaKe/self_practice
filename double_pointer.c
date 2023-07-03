#include <stdio.h>

int main()
{
	int num = 123;
	int *pr2;
	int **pr1;

	pr2 = &num;
	pr1 = &pr2;
	printf("\n Value of num is: %d", num);
	printf("\n Value of num using pr2 is: %d", *pr2);
	printf("\n Value of num using pr1 is: %d", **pr1);

	printf("\n Address of num is: %p", &num);
	printf("\n Address of num using pr2 is: %p", pr2);
	printf("\n Address of num using pr1 is: %p", *pr1);

	printf("\n Address of Pointer pr2 is: %p", &pr2);
	printf("\n Address of Pointer pr2 using pr1 is: %p", pr1);

	printf("\n Value of Pointer pr1 is: %p", pr1);
	printf("\n Address of Pointer pr1 is: %p\n", &pr1);

	return (0);
}
