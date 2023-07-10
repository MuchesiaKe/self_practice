#include <stdio.h>
#include <stdlib.h>

/**
*create_string - create a string
*@len : length of the string
*@c : character for the string
*Return: pointer to the string
**/

char *create_string(int len, char c)
{
	char *s;
	int i;

	s = malloc((len + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}

/**
*main - control program execution
*Return: 0 for success, non-zero for failure
**/

int main(void)
{
	char *s;

	s = create_string(100, 'H');
	printf("%s\n", s);
	free(s);
	return(0);
}
