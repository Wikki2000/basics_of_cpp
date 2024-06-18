#include <iostream>

using namespace std;

int main(void)
{
	string names[] = {"Wisdom", "Aniefiok", "Okposin"};
	cout << "My name is: ";
	for (string name : names)
		cout << name << " ";
	cout << endl;
	return 0;
}
