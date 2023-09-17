#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
*str_tok - splits a string into array of words
*@str: string to split
*@del: delimiter to split
**/

void str_tok(char *str, const char *del)
{
	char **str_arr, *token, *str_temp;
	int i, j;

	printf("Here");
	str_temp = malloc(sizeof(char *));
	i = 0;
	str_temp = str;
	token = strtok(str_temp, del);
	i++;
	while (token != NULL)
	{
		token = strtok(NULL, del);
		i++;
		printf("%d\n", i);
		printf("%s\n", token);
	}

	str_arr = malloc(sizeof(*str_arr) * (i + 1));
	if (str_arr == NULL)
		return ;
	token = strtok(str, del);
	for (i = 0; token != NULL; i++)
	{
		j = 0;
		while(token[j])
		{
			j++;
		}
		str_arr[i] = malloc(sizeof(*str_arr) * (j + 1));
		if (str_arr[i] == NULL)
			return;
		str_arr[i] = token;
		token = strtok(NULL, del);
	}
	str_arr[i] = NULL;
	while (str_arr)
		printf("%s\n", *str_arr++);
}

/**
*main - control program execution
*Return: 0 for success
**/

int main(void)
{
	str_tok("Hello World", " ");
	return (0);
}
