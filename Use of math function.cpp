#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float a, b;

	cout << "Enter the value of a: ";
	cin>>a;
	cout <<"The square of a is: "<< pow(a, 2) << endl;

	cout << "Enter the value of b: ";
	cin >> b;
	cout <<"The square of b is: "<<pow(b, 2) << endl;

	float sum = pow(a, 2) + pow(b, 2);
	cout <<"The sum of a and b is: "<< sum << endl;
	cout <<"The square root of sum is: "<< pow(sum, 0.5);


	return 0;

}
