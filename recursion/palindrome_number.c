#include <stdio.h>

/**
*main - check if number is palindrome
*Return: 0 for success, non-zero for failure
**/

int main(void)
{
	int n, reversed, remainder, original;

	reversed = 0;
	printf("Enter an integer: ");
	scanf("%d", &n);
	original = n;
	while (n != 0)
	{
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n /= 10;
	}
	if (original == reversed)
		printf("%d is a palindrome.\n", original);
	else
		printf("%d is not a palindrome.\n", original);
	return (0);
}
