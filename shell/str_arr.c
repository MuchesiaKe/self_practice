#include <stdlib.h>
#include <stdio.h>

/**
*str_arr - breaks a string into array of words
*@str: string to convert to array of words
*Return: pointer to an array of strings
**/


void str_arr(char *str)
{
	int i, j, word_size, words;
	char **arr;

	printf("Do we get here?");
	word_size = words = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' || str[i] != '\t')
		{
			words++;
			while (str[i] != ' ' || str[i] != '\t')
				i++;
		}
	}
	printf("words - %d\n", words);
	arr = malloc(sizeof(*arr) * (words + 1));

	for (i = 0; str[i] != '\0'; i++)
	{
		word_size = 0;
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i] != ' ' || str[i] != '\t')
		{
			word_size++;
			i++;
		}
		arr[j++] = malloc(sizeof(**arr) * (word_size + 1));
	}
	for (i = 0; i < (words + 1); i++)
	{
		for (j = 0; *str != ' ' || *str != '\t' ; j++)
		{
			arr[i][j] = *str++;
		}
		arr[i][j] = '\0';
	}
	arr[i] = NULL;
}


/**
*
**/

int main(void)
{
	char str[50] = "This is just for testing the above code";
	printf("Do we get here?");

	str_arr(str);
	return (0);
}
