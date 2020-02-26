#include<iostream>
using namespace std;

int main()
{
	const int lower = 10;
	const int upper = 20;
	int number;
	cout << boolalpha;

	cout << "Enter a number between: " << lower << "and " << upper;
	cin >> number;

	bool in_bounds=false; 

	in_bounds = (number < lower || number >= upper);

	cout << "The number is outside " << lower << "and " << upper<<":" << in_bounds << endl;


}
