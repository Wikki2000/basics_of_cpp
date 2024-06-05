#include <iostream>
#include <sstream>

using namespace std;

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, sum;

	cout << "Enter the first number: ";
	cin >> a;

	cout << "Enter the second number: ";
	cin>> b;
       
	/* Using stringstream for string interpolation */
   	stringstream ss;
	sum = a + b;
  	ss << "The sum of " << a << " and " << b << " is " << sum;
	cout << ss.str() << endl;
	return (0);
}
