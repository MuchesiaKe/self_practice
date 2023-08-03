#include <stdio.h>

struct User
{
	char *name;
	char *email;
	int age;
};

int main(void)
{
	struct User user;
	struct User *ptr;

	ptr = &user;

	(*ptr).name = "Foo Bar";
	printf("(*ptr).name == ptr->name : %s\n", ptr->name);
	return (0);
}
