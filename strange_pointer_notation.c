#include <stdio.h>
/**
*main - illustrate 1[v] array notation
**/

int main(void)
{
	int v[10];

	v[1] = 42;
	printf("%d\n", 1[v]);
	printf("%c\n", "hello"[1]);
	printf("%c\n", *"hello");
	printf("%c\n", 2["hello"]);
	return (0);
}
