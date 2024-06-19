#include "lists.h"

/**
 * free_list - Free link liist
 * @head: Pointer to the first node of the pointer
 */
void free_list(node_t *head)
{
	node_t *current = head;
	node_t *temp = nullptr;

	while(current)
	{
		temp = current->next; /* Save current adres before deleting */
		delete current; /* Delete current node */
		current = temp; /*Retrieve adres of nxt node to be deleted */
	}
}
