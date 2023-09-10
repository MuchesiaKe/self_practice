#include <stdio.h>
#include <string.h>

int main()
{
	char gfg[] = " Geeks - for - geeks - Contribute";

	const char s[] = "-";
	char *tok;

	tok = strtok(gfg, s);

	while (tok != 0)
	{
		printf(" %s\n", tok);
		tok = strtok(0, s);
	}
	return (0);
}
