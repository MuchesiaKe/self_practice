#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
*main - Illustrate read system call
*Return: 0 for success, otherwise non-zero
**/

int main(void)
{
	int fd, sz;
	char *c = calloc(100, sizeof(char));

	fd = open("foo.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("r1");
		exit(1);
	}	

	sz = read(fd, c, 10);
	printf("called read(%d, c, 10). returned that "
		"%d bytes were read.\n", fd, sz);
	c[sz] = '\0';
	printf("Those bytes are as follows: %s\n", c);
	return (0);
}
