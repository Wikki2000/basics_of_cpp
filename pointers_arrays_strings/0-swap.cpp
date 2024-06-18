#include "main.h"

using namespace std;

/**
 * swap_int - Swap two integer value
 * @a: First integer
 * @b: Second integer
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	/*
	 * I am deferencing the memory address pointed by "b" and
	 * then assign it to pointer a "so" it update the adress pointed by "a"
	 */
	*a = *b;
	*b = temp;
}

