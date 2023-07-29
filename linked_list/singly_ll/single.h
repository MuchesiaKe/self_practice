#ifndef SINGLE_H
#define SINGLE_H
/**
*Node : struct for the linked list operations
*@data: value for the struct node
*@next: pointer to the next node
**/
	struct Node
	{
		int data;
		struct Node *next;
	};

	#include <stdlib.h>
	#include <stdio.h>
	void print_list(struct Node *node);
	void push(struct Node **head_ref, int new_data);
	void insert_after(struct Node *prev_node, int new_data);
#endif
