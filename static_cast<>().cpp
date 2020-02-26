#include<iostream>
using namespace std;

int main()
{
	const int count = 3;
	int num1, num2, num3;
	int sum;

	cout << "Enter three integers seperated by spaces";
	cin >> num1 >> num2 >> num3;

	sum = num1 + num2 + num3;
	cout << "The sum of numbers is: " << sum<<endl;

	double average;
	average = static_cast<double>(sum)/count;

	cout << "The average of numbers is: " << average << endl;

}

 
