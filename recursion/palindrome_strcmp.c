#include <stdio.h>
#include <string.h>

/**
*palindrome_cmp - uses strcmp to compare reversed string
*@str: string to check if palindrome
**/

void palindrome_cmp(char *str)
{
	int len, i;
	char str_rev[20];

	len = strlen(str) - 1;
	i = 0;
	for (i = len; i >= 0; --i)
		str_rev[len - i] = str[i];
	printf("%s\n", str_rev);
	printf("%d\n", strcmp(str, str_rev));
	if (strcmp(str, str_rev) == 0)
		printf("%s is a palindrome.\n", str);
	else
		printf("%s is not a palindrome.\n", str);
}

/**
*main - controls program execution
*Return: 0 for success, non-zero for failure
**/

int main(void)
{
	char str[20];
	printf("Enter string: ");
	scanf("%s", str);

	if (strlen(str) > 20)
	{
		printf("String should not be longer than 20 characters.\n");
		return (1);
	}
	palindrome_cmp(str);
	return (0);
}
