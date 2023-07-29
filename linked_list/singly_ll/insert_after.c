#include "single.h"

/**
*insert_after - insert new node after the given node
*@prev_node: node to insert after
*@new_data: data for the new node
**/

void insert_after(struct Node *prev_node, int new_data)
{
	struct Node *new_node;

	if (prev_node == NULL)
	{
		printf("The given previous node cannot be NULL");
		return;
	}
	new_node = malloc(sizeof(struct Node));
	if (new_node == NULL)
	{
		printf("Memory allocation failed\n");
		return;
	}
	new_node->data = new_data;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
}
