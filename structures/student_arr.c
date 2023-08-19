#include <stdio.h>
#include <string.h>

/**
*struct student - contains student information
*@rollno: student roll
*@name: name of student
**/

struct student
{
	int rollno;
	char name[10];
};

/**
*main - takes and display student information
*Return: 0 for success
**/

int main(void)
{
	int i;
	struct student st[5];

	printf("Enter Records of 5 students\n");
	for (i = 0; i < 5; i++)
	{
		printf("\nEnter Rollno:");
		scanf("%d", &st[i].rollno);
		printf("\nEnter Name: ");
		scanf("%s", &st[i].name);
	}

	printf("\nStudent Information List:");
	for (i = 0; i < 5; i++)
		printf("\nRollno: %d	Name: %s", st[i].rollno, st[i].name);
	putchar('\n');
	return (0);
}
