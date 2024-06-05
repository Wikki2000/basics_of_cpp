#include "calculator.h"

using namespace std;

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	while (1)
	{
		int opt;
	       	float num1, num2;

		cout << "Simple calculator" << endl;
		cout << "***************************" << endl;
		cout << "Enter an option." << endl;
		cout << "1. Add\t\t2. Sub\n3. Mul\t\t4. Div\n5. Exit" << endl << "Option enter is: ";
		cin >> opt;

		if (opt == 5)
		{
			cout << "Goodbye!" << endl;
			exit(1);
		}

		cout << "Enter first number: ";
		cin >> num1;

		cout << "Enter first number: ";
		cin >> num2;

		switch (opt)
		{
			case 1:
				cout << num1 << " + " << num2 << " = " << sum(num1, num2);
				break;
			case 2:
				cout << num1 << " - " << num2 << " = " << sub(num1, num2);
				break;
			case 3:
				cout << num1 << " x " << num2 << " = " << mul(num1, num2);
				break;
			case 4:
				try
				{
					float result;

					if (num2 == 0)
						throw string("Oops! Cant divide by zero");
					result = div(num1, num2);
					cout << num1 << " / " << num2 << " = " << result;
				}
				catch (string& error)
				{
					cout << error << endl;
				}
				
				break;
			default:
				cout << "Oops! You've enter invalid option" << endl;
		}
		cout << endl << endl;
	}
	return (0);
}
