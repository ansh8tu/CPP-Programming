#include<iostream>
using namespace std;

class cars
{

public:

	string name;
	string model;
	string price;
};

int main()
{
	cars car1;

	car1.name = "Ferrari";
	car1.model = "X500";
	car1.price = "Rs.5M";

	cout << "The name of car is:" << car1.name << endl;
	cout << "The model of the car is:" << car1.model << endl;
	cout << "The price of car is:" << car1.price << endl;

	return 0;
}

