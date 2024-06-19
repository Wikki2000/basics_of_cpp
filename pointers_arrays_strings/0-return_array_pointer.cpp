#include <iostream>
using namespace std;

int *create_array(int size)
{
	int *arr = new int[size];
	
	if (arr == nullptr)
		return (nullptr);

	/* Fill the array with value */
	for (int i = 0; i < size; i++)
		arr[i] = i + 1;

	return (arr);
}

int main(void)
{
	int size = 5;
	int *array = create_array(size);

	if (array == nullptr)
	{
		cout << "Failed to alloacte memory" << endl;
		exit(1);
	}

	for (int i = 0; i < size; i++)
		cout << array[i] << endl;
	delete[] array;
	return (0);
}
