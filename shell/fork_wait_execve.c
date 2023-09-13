#include <unistd.h>

/**
*main - illustrating the concept of fork, wait and execve
*
*Return: 0 for success
**/

int main(void)
{
	int i, id;

	while (i < 5)
	{
		id = fork();
		if (id == 0)
		{
			execve(
		}
	}
}
