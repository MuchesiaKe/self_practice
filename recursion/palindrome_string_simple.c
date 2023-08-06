#include <stdio.h>
#include <string.h>

/**
*main - checks if string is palindrome
*Return: 0 for success, non-zero for otherwise
**/

int main(void)
{
	char str[] = "abba";
	int a, z;

	a = 0;
	z = strlen(str) - 1;
	while (z > a)
	{
		if (str[a++] != str[z--])
		{
			printf("%s is not a palindrome.\n", str);
			return (0);
		}
	}
	printf("%s is a palindrome.\n", str);
	return (0);
}
