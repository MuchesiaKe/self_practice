#include "single.h"

/**
*push - inserts new node on the front of the ll
*@head_ref: reference to the head
*@new_data: data for the new node
**/

void push(struct Node **head_ref, int new_data)
{
	struct Node *new_node;

	new_node = malloc(sizeof(new_node));
	new_node->data = new_data;
	new_node->next = *head_ref;
	*head_ref = new_node;
}

/**
*printList - print content of linked list starting from head
*@node: reference to head
**/
void printList(struct Node *node)
{
	while (node != NULL)
	{
		printf(" %d", node->data);
		node = node->next;
	}
	printf("\n");
}

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
	printList(head);
	push(&head, 1);
	printf("After inserting 1 at front: ");
	printList(head);
	return (0);
}
