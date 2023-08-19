#include <stdio.h>

/**
*struct class - structure class
*@roll_no: student roll number
*@grade: student grade
*@marks: student marks
**/

struct class
{
	int roll_no;
	char grade;
	float marks;
};

/**
*display - display the contents of the array of structures
*@class_record : array of structure of student record
**/

void display(struct class class_record[3])
{
	int i, len;

	len = 3;
	for (i = 0; i < len; i++)
	{
		printf("Roll number: %d\n", class_record[i].roll_no);
		printf("Grade: %d\n", class_record[i].grade);
		printf("Average marks: %.2f\n", class_record[i].marks);
		printf("\n");
	}
}

/**
*main - driver function
*Return: 0 for success
**/

int main(void)
{
	struct class class_record[3] = { {1, 'A', 89.5f},
					 {2, 'C', 67.5f},
					 {3, 'B', 70.5f} };
	display(class_record);
	return (0);
}
