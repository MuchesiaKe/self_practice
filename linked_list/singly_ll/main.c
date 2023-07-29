#include "single.h"

/**
*main - driver code
*Return: 0 for success, non-zero for failure
**/

int main(void)
{
	struct Node *head = NULL;

	push(&head, 6);
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	printf("Created Linked list is: ");
	print_list(head);
	push(&head, 1);
	printf("After inserting 1 at front: ");
	print_list(head);
	insert_after(head->next->next->next, 1);
	printf("After inserting 1 after 2: ");
	print_list(head);
	return (0);
}
