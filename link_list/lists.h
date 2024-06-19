#ifndef LISTS_H
#define LISTS_H

#include <iostream>
#include <string>

using namespace std;

/*
 * @brief Contains student data
 */
struct data
{
	string name; ///< Name of student
	string reg_no; ///< Student id number
	int score; ///< Student total score
};

/**
 * @brief Represents a node in a linked list containing student data.
 */
typedef struct node
{
	struct data student_data; ///< Student data stored in this node
	node *next; ///< Pointer to the next node in the list
} node_t;

node_t *insert_node(node **head, string name, string reg, int score);
node_t *insert_node_end(node_t **head, string name, string reg_no, int score);
size_t print_list(node_t *head);
void free_list(node_t *head);
void free_list_recursive(node_t *head);

#endif
