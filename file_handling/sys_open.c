#include <stdio.h>
#include <errno.h>
#include <fcntl.h>

/**
*main - program to illustrate system call
*Return: 0 on success
**/

int main()
{
	int fd = open("foo.txt", O_RDONLY | O_CREAT);

	printf("fd = %d\n", fd);
	if (fd == -1)
	{
		printf("Error Number %d\n", errno);
		perror("Program");
	}
	return (0);
}
