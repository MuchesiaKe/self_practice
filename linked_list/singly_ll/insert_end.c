#include "single.h"

/**
*insert_end - insert node at the end of the linked list
*@head: reference to head
*@new_data: data for the new node
**/

void insert_end(struct Node *head, int new_data)
{
	struct Node *last_node;

	while (head->next != NULL)
		head = head->next;
	last_node = malloc(sizeof(struct Node));
	if (last_node == NULL)
	{
		printf("Memory allocation failed\n");
		return;
	}
	last_node->data = new_data;
	head->next = last_node;
	last_node->next = NULL;
}
