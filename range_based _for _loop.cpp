============================================================================================================================================
//This is a code for range based for loop
============================================================================================================================================

#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main()
{
	vector<double>temperature{ 20.33,45.66,65.66 };
	double average{};
	double sum{};
	for (auto temp : temperature)
	{
		sum += temp;
		cout << "The sum of temperatures is: " << sum << endl;
	}

	average = sum / temperature.size();
	cout << fixed << setprecision(1);
	cout << "The average is: " << average << endl;

}
