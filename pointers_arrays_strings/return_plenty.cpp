#include <iostream>
#include <tuple>
using namespace std;

tuple<string, int, double> get_multiple_value() 
{
	string name = "Wisdom Okposin";
	int num = 24;
	double score = 24.08;
	return make_tuple(name, num, score);
}

int main(void)
{
	tuple<string, int, double> result = get_multiple_value();
	cout << "Name: " << get<0>(result) << endl;
	cout << "Age is: " << get<1>(result) << endl;
	cout << "Score is: " << get<2>(result) << endl;
	return (0);
}
