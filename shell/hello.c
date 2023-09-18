#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *word;
	int i;

	word = malloc(sizeof(word));
	for (i = 0; i < 20; i++)
		word[i] = 'H';
	printf("Hello world %s\n", word);
	return (0);
}
