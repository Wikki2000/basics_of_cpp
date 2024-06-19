#include "lists.h"

/**
 * main - Entry of main program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	node_t *head = nullptr;
	size_t num_node;

	insert_node(&head, "Wisdom Okposin", "AK17/ENG/EEE/058", 80);
	insert_node(&head, "Idongesit Okposin", "AK22/EDU/SED/030", 70);

	num_node = print_list(head);
	cout << "The total number of the node is: " << num_node << endl;
	free_list(head);
	return (0);
}
