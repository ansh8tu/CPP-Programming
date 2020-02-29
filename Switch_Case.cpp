#include<iostream>
using namespace std;

int main()
{
	char result;
	cout << "What is your expected grade in ADS between a to e: ";
	cin >> result;

	switch (result)
	{
		case 'a':
		case 'A' :
			cout << "Great now you need to focus on your studies to score this grade" << endl;
			break;

		case 'b' :
		case 'B' :
			cout << "Okay but I guess you need to give some more efforts: "<<endl;
			break;

		case 'c' :
		case 'C' :
			cout << "Okay!! Focus on studies from now" << endl;
			break;

		case 'd' :
		case 'D' :
			cout << "Expect More from life" << endl;
			break;

		case 'e' :
		case 'E' :
			cout << "If you can't score more, atleast you can expect lol" << endl;
			break;

		default :
			cout << "You failed here also!!";

	}
    
	return 0;
}
