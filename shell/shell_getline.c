#include <stdio.h>
#include <stdlib.h>

/**
*shell_getline - takes user input
**/

int shell_getline(char *get_str, int *p)
{
	char c;
	int i;

	i = 0;
	while ((c = getchar()) != EOF || c != '\n')
	{
		get_str[i] = c;
		i++;
		if (c == '\n')
		{
			get_str[i] = '\0';
			return (i);
		}
	}
	*p = i;
	return (i);
}

/**
*main - control program execution
*Return: 0 for success
**/

int main()
{
	char *str;
	int size;

	str = malloc(sizeof(str));
	printf("%d\n", shell_getline(str, &size));
	printf("%s\n", str);
	return (0);
}
