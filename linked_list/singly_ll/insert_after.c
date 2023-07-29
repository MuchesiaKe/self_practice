/**
*insert_after - insert new node after the given node
*@prev_node: node to insert after
*@new_data: data for the new node
**/

void insert_after(struct Node *prev_node, int new_data)
{
	if (prev_node == NULL)
	{
		printf("The given previous node cannot be NULL");
		return;
	}
	new_node->data = new_data;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
}
