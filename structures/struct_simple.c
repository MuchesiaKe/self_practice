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

	user.name = "Foo Bar";
	user.email = "foo@hbtn.io";
	user.age = 98;
	printf("Name: %s\nEmail: %s\nAge: %d\n", user.name, user.email, user.age);
	return (0);
}
