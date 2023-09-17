#include <stdio.h>
#include <string.h>

int main(void)
{
	char gfg[] = " 1997 Ford E350 ac 3000.00";
	const char s[4] = " ";
	char *tok;

	tok = strtok(gfg, s);
	while (tok != 0)
	{
		printf("%s, ", tok);
		tok = strtok(0, s);
	}
	return (0);
}
