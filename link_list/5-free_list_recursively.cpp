#include "lists.h"

/**
 * free_list_recursive - Free a link list recursively
 * @head: Pointer to the first node of a link list
 */
void free_list_recursive(node_t *head)
{
	if (head == nullptr)
		return;
	free_list_recursive(head->next);
	delete head;
}
