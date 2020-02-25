//This is the program for declaring and initializing an array

#include<iostream>
using namespace std;

int main()
{
	int test_scores[] = { 10,20,30,40,50 };
  
  //In the previous line there's no actual need to declare the size of array
  //The compiler will automaticlly Generate the size of array based on the no. of elements
  
	cout << "Enter the marks that Roll Number 0 expected: ";
	cin >> test_scores[0];

	//Setting the value of marks scored by Roll number 0 to 35
	test_scores[0] = 35;
	cout <<"The marks scored by Roll Number 0 is: " <<test_scores[0] << endl;
	
}
