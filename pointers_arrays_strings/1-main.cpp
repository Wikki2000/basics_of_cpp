#include "main.h"

using namespace std;

/**
 * main - Entry of main program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int *memory_assign = nullptr;

	memory_assign = alloc_int(memory_assign);
	*memory_assign = 50;
	printf("The number store in assign memory is: %d\n", *memory_assign);
	delete memory_assign;
	return (0);
}

