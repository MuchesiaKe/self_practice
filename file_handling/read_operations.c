#include <stdio.h>
#include <string.h>

/**
*main - program to open, read and close a file
**/

int main(void)
{
	FILE *file_pointer;
	char dataToBeRead[50];

	file_pointer = fopen("GfgTest.c", "r");
	if (file_pointer == NULL)
	{
		printf("GfgTest.c file failed to open.");
	}
	else
	{
		printf("The file is now opened.\n");
		while (fgets(dataToBeRead, 50, file_pointer) != NULL)
		{
			printf("%s", dataToBeRead);
		}
		fclose(file_pointer);
		printf("The file is now closed.\n");
	}
	return (0);
}
