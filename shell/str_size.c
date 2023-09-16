#include <stdlib.h>
#include <stdio.h>

/**
*str_arr - tokenize string
*@str: string to find size
*Return: size of array
**/

char **str_arr(char *str)
{
	char **str_arr;
	int size, word_size, i, j, index;

	size = i = index =  j = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		else
		{
			size++;
			while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
			{
				i++;
			}
			
		}
	}

	str_arr = malloc(sizeof(*str_arr) * (size + 1));

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		else
		{
			word_size = 0;
			while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
			{
				word_size++;
				i++;
			}
			str_arr[index] = malloc(sizeof(**str_arr) * (word_size + 1));
			if (str_arr[index] == NULL)
				return (NULL);
			index++;
		}
	}

	i = index = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		else
		{
			j = 0;
			while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
			{
				str_arr[index][j++] = str[i++]; 
			}
			str_arr[index][j] = '\0';
			index++;
		}
	}
	str_arr[index] = NULL;
	return (str_arr);
}

/**
*main - control program execution
*Return: 0 for success
**/

int main(void)
{
	char **str;

	str = str_arr("	 	How many 	words will this		sentence be	.");
	while (*str)
		printf("%s\n", *str++);
	return (0);
}
