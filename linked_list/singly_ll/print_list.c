#include "single.h"

/**
*printList - print content of linked list starting from head
*@node: reference to head 
**/
void print_list(struct Node *node)
{
	while (node != NULL)
	{
		printf(" %d", node->data);
		node = node->next;
	}
	printf("\n");
}

