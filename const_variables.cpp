#include<iostream>
using namespace std;

const double price_per_room = 30.0;
const double tax_per_room = 0.06;


int main()
{
	int number_of_rooms;
	cout<< "Enter the number of rooms: ";
	cin >> number_of_rooms;

	cout << "The price per room is:$ " << price_per_room<<endl;
	double cost = number_of_rooms * price_per_room;
	cout << "The total price of room is:$ " << cost << endl;

	double total_tax = cost * tax_per_room;
	cout << "The tax is:$ " << total_tax<< endl;

	double total_cost = cost + total_tax;
	cout << "The total expense is:$ " << total_cost << endl;

	return 0;
}
