#include <stdio.h>
#include <string.h>

/**
*main - illustrate basic file handling operations
Return: 0 for success, non-zero otherwisee
**/

int main(void)
{
	FILE *file_pointer;

	char dataToBeWritten[50] = "GeeksforGeeks-A Computer "
					"Science Portal for Geeks";
	file_pointer = fopen("GfgTest.c", "w");

	if (file_pointer == NULL)
	{
		printf("GfgTest.c file failed to open.\n");
	}
	else
	{
		printf("The file is now opened.\n");
		if (strlen(dataToBeWritten) > 0)
		{
			fputs(dataToBeWritten, file_pointer);
			fputc('\n', file_pointer);
		}
	fclose(file_pointer);
	printf("Data successfully written in file "
		"GfgTest.c\n");
	printf("The file is now close.\n");
	}
	return (0);
}
