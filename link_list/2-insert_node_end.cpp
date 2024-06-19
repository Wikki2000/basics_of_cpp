#include "lists.h"

/**
 * insert_node_end - Insert a node at the end of a lists.
 * @head: Pointer to the first node of the list
 * @name: Student name
 * @reg_no: Registration number of student
 * @score: Total score of student
 *
 * Return: The adress of new node other wise nullptr on failure
 */
node_t *insert_node_end(node_t **head, string name, string reg_no, int score)
{
	node_t *temp = *head;
	node_t *new_node = new node_t;

	if (new_node == nullptr)
		return (nullptr);

	new_node->student_data.name = name;
	new_node->student_data.reg_no = reg_no;
	new_node->student_data.score = score;
	new_node->next = nullptr;

	if (*head == nullptr)
	{
		*head = new_node;
		return (new_node);
	}
	
	/* Iterate to the last point of the node */
	while (temp->next)
		temp = temp->next;

	temp->next = new_node; /* Put the new_node at the last point */

	return (new_node);
}
