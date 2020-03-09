==================================================================================================================================================
//This is a program to demonstrate Public inheritance from a base class Account to a derived class Savings_account
==================================================================================================================================================
#include<iostream>
#include<string>
using namespace std;

class Account
{
public:
	double balance;
	string name;
	void deposit(double amount);
	void withdraw(double amount);
	Account();
	~Account();
};

Account::Account()
{
	balance = 0;
	name = "An account";
	cout << "This ia constructor call" << endl;

}

Account::~Account()
{
	cout << "This is a destructor call" << endl;
}

void Account::deposit(double amount)
{
	cout << "Account deposit called with " << amount << endl;

}

void Account::withdraw(double amount)
{
	cout << "Account withdraw called with " << amount << endl;
}


class Savings_account :public Account
{
public:
	double intrest_rate;
	Savings_account();
	~Savings_account();
	void deposit(double amount);
	void withdraw(double amount);
};

Savings_account::Savings_account()
{
	intrest_rate = 3.0;
	cout << "This is a constructor call for savings account" << endl;
}

Savings_account::~Savings_account()
{
	cout << "This is a destructor call for savings account" << endl;
}

void Savings_account::deposit(double amount)
{
	cout << "Savings account deposit called with " << amount << endl;
}

void Savings_account::withdraw(double amount)
{
	cout << "Saving's account withdraw called with " << amount << endl;
}


int main()
{
	Account acc;
	acc.deposit(5000);
	acc.withdraw(2000);
	cout << endl;

	Account* pointer_to_account = nullptr;
	pointer_to_account = new Account;
	pointer_to_account->deposit(5000);
	pointer_to_account->withdraw(1000);
	delete pointer_to_account;
	cout << endl;

	Savings_account sav_acc;
	sav_acc.deposit(3000);
	sav_acc.withdraw(1000);
	sav_acc.balance = 1000;
	cout << "The balance in the savings account is: " << sav_acc.balance << endl;

	cout << endl;
}
