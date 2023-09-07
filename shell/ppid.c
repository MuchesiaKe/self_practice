#include <stdio.h>
#include <unistd.h>

/**
*main - PPID
*Return: Always 0
**/

int main(void)
{
	pid_t ppid;

	ppid = getppid();
	printf("%d\n", ppid);
	return (0);
}
