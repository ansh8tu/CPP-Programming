=================================================================================================================================================
//This is a program for .find () function in string
=================================================================================================================================================
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1 = "The word to find is boo";

	string word;
	cout << "Enter the word you want to find: ";
	cin >> word;

	int position = s1.find(word);

	if (position != string::npos)
		cout << "Word found at position: " << position << endl;
	else
	{
		cout << "Sorry word not foound" << endl;

	}

}
