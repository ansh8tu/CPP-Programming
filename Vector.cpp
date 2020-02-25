#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <char> vowels{ 'a','e','i','o','u' };
	vector <int> test_scores{ 10,20,30,40 };
	vector <double> days_in_year(365, 90);
	
	//array syntax
	cout << days_in_year[9] << endl;

	//vector syntax
	cout << test_scores.at(0) << endl;

	//use of push_back command
	test_scores.push_back(80);
	cout << test_scores[4] << endl;

	//use of size() command
	cout << "The size of test_score vector is: " << test_scores.size()


}


