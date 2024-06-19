#include "lists.h"

/**
 * main - Entry of main program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	node_t *head = nullptr;
	
	insert_node_end(&head, "Wisdom Okposin", "Ak17/ENG/EEE/058", 70);
	insert_node_end(&head, "Kufre Oton", "Ak17/ENG/EEE/060", 60);
	print_list(head);
	free_list_recursive(head);
	return (0);
}
