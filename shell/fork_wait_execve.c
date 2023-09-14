#include <unistd.h>
#include <sys/wait.h>

/**
*main - illustrating the concept of fork, wait and execve
*
*Return: 0 for success
**/

int main(void)
{
	int i;
	pid_t pid;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	i = 0;
	while (i < 5)
	{
		pid = fork();
		if (pid == 0)
			execve(argv[0], argv, NULL);
		else
			wait(NULL);
		i++;
	}
	return (0);
}
