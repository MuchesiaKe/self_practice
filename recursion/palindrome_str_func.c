#include <stdio.h>
#include <string.h>

/**
*is_palindrome - checks if string is palindrome
*@str: string to check if palindrome
*Return: 0
**/

int is_palindrome(char *str)
{
	int a, z;

	a = 0;
	z = strlen(str) - 1;
	while (z > a)
		if (str[a++] != str[z--])
		{
			printf("%s is not a palindrome.\n", str);
			return (0);
		}
	printf("%s is a palindrome.\n", str);
	return (0);
}

/**
*main - driver program
*Return: 0 for success, non-zero otherwise
**/

int main(void)
{
	is_palindrome("abba");
	is_palindrome("Hello");
	is_palindrome("Abba");
	return (0);
}
