#include<iostream>
using namespace std;

int main()
{
	int counter = 10;
	int result = 0;

	cout << "Counter's value is: " << counter << endl;
	result = ++counter + 10;
	//The above result can be wriiten as;
	//counter=counter+1;pre increment of counter by 1
	//result=counter+10; the counter now contains value 11

	cout << "The value of result is: " << result;
	return 0;
}
