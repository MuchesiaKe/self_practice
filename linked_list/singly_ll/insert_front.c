/**
*push - inserts new node on the front of the ll
*@head_ref: reference to the head
*@new_data: data for the new node
**/

void push(struct Node **head_ref, int new_data)
{
	struct Node new_node;

	new_node = malloc(sizeof(new_node));
	new_node->data = new_data;
	new_node->next = *head_ref;
	*head_ref = new_node;
}
