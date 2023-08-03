#include <stdio.h>

/**
*string_rev - prints a string in reverse order
*@str: string to be reversed
**/

void string_rev(char *str)
{
	if (*str)
	{
		string_rev(str + 1);
		printf("%c", *str);
	}
}

/**
*main - control program execution
*Return: 0 for success, non-zero for failure
**/

int main(void)
{
	char a[] = "Geeks for Geeks";

	string_rev(a);
	printf("\n");
	return (0);
}
