#include "lists.h"

/**
 * @brief Add a node at the beginning of a link list.
 * @head Ponter to the first node of the link list.
 * @name This is the name of the student
 * @reg Registration number of the student.
 * @score The total score of the student.
 * 
 * @return The new node
 */
node_t *insert_node(node **head, string name, string reg, int score)
{
	/* Allocate memory for the new node */
	node_t *new_node = new node_t;

	/* Check if memory allocation was successful */
	if (new_node == nullptr)
		return (nullptr);

	/* Initialize data in the new node */
	new_node->student_data.name = name;
	new_node->student_data.reg_no = reg;
	new_node->student_data.score = score;
	new_node->next = nullptr;

	if (*head == nullptr)
	{
		*head = new_node;
		return (new_node);
	}
	
	/* Insert at the beginning of the link list */
	new_node->next = *head;
	(*head)	= new_node;
	return (new_node);
}

