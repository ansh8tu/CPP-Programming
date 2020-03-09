================================================================================================================================================
//This is a code for Inheritance of constructor and destructor
================================================================================================================================================

#include<iostream>
#include<string>
using namespace std;

class Base
{
public:
	Base()
	{
		cout<< "This is a base constructor" << endl;
	}
	~Base()
	{
		cout << "This is a base destructor" << endl;
	}


};

class Derived :public Base
{
private:
	int doubled_value;

public:
	Derived()
	{
		cout << "This is is a derived constructor" << endl;
	}

	~Derived()
	{
		cout << "This is a derived destructor" << endl;
	}
};

int main()
{
	Base b;
	Derived d;
}
