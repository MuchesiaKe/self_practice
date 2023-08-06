#include <stdio.h>
#include <string.h>

/**
*palindrome_recursion - checks if string is palindrome recursively
*@str: string to check for palindrome
*@a: lower variable
*@z: higher variable
*Return: 1 if palindrome, 0 otherwise
**/

int palindrome_recursion(char *str, int a, int z)
{
	printf("str: %s	a: %d	z: %d\n", str, a, z);

	if (str == NULL || a < 0 || z < 0)
		return (0);
	if (z <= a)
		return (1);
	if (str[a] == str[z])
		return palindrome_recursion(str, a + 1, z - 1);
	return (0);
}

/**
*main - controls program execution
*Return: 0 for success, non-zero for otherwise
**/

int main(void)
{
	char str[20];

	printf("Enter string: ");
	scanf("%s", str);
	if (strlen(str) > 20)
	{
		printf("The string should not exceed 20 characters.\n");
		return (1);
	}

	if (palindrome_recursion(str, 0, strlen(str) - 1))
		printf("%s is a palindrome.\n", str);
	else
		printf("%s is not a palindrome.\n", str);
	return (0);
}
