#include "lists.h"

/**
 * print_list - Print the items in a list.
 * @head: Pointer to the first node of a list.
 *
 * Return: The total number of node in a list.
 */
size_t print_list(node_t *head)
{
	node_t *temp = head;
	size_t count = 0;

	while (temp != nullptr)
	{
		cout << "Student name is: " << temp->student_data.name << endl;
		cout << "Student reg. number is: " << temp->student_data.reg_no << endl;
		cout << "Student total score is: " << temp->student_data.score << endl;
		cout<< endl;

		temp = temp->next;
		count++;
	}
	return (count);
}
