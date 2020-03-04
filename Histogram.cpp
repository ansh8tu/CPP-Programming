=================================================================================================================================================
//This is a code for displaying Histogram
=================================================================================================================================================
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int no_of_days{ 0 };

	cout << "Enter the no. of days you want the data for: ";
	cin >> no_of_days;

	vector <int> logged_in{ 0 };

	for (int i{ 1 }; i <= no_of_days; i++)
	{
		int day;
		cout << "The number of times you've logged in on " << i<<":";
		cin >> day;
		logged_in.push_back(day);
	}

	cout << "The Histogram for your time period is: " << endl;

	for (auto val : logged_in)
	{
		for (int i{ 1 }; i <= val; i++)
		{
			cout << "-";
		}
		cout << endl;
	}

	cout << endl;
        //Further loop could be used to print with more clarity!!
	return 0;

}
