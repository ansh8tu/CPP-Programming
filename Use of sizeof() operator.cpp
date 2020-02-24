#include<iostream>
#include<climits>
using namespace std;

int main()
{
	cout << "The size of char in bytes is: " << sizeof(char) << endl;
	cout << "The size of int in bytes is: " << sizeof(int) << endl;
	cout << "The size of long long int in bytes is: " << sizeof(long long int) << endl;
	cout << "The size of float in bytes is: " << sizeof(float) << endl;
	cout << "The size of double in bytes is: " << sizeof(double) << endl;


	cout << "The range of char is from: " << CHAR_MIN << " to " << CHAR_MAX << endl;
	cout << "The range of int is from: " << INT_MIN << " to " << INT_MAX << endl;
	cout << "The range of long int  is from: " << LONG_MIN << " to " << LONG_MAX << endl;
	cout << "The range of long long int is from: " << LLONG_MIN << " to " << LLONG_MAX << endl;
	cout << "The range of float is from: " << FLT_MIN << " to " << FLT_MAX << endl;
	cout << "The range of double is from: " << DBL_MIN << " to " << DBL_MAX << endl;

	
	
}

