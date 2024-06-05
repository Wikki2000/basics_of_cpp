#include <iostream>

using namespace std;

/**
 * array_sum - Calculate the sum of element in an array
 * @arr: Pointer to the first element in an array
 * @size: The size of the array
 *
 * Return: The sum of the an array items
 */
int array_sum(int arr[], int size)
{
	int i, sum = 0;

	for (i = 0; i < size; i++)
		sum += arr[i];
	return (sum);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int arr[] = {1, 2, 4};
	int sum;
	int size = sizeof(arr) / sizeof(arr[0]);

	sum = array_sum(arr, size);
	cout << "The sum is: " << sum << endl;
	return (0);
}
