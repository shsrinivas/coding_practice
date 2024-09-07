/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<iostream>
using namespace std;

class Bank_customer
{
	protected:
	char *name;
	int id;
	int balance;
	char *DOB;

	Bank_customer(char *name = (char *)"Shreya", int id = 10, int balance = 10000):name(name),id(id),balance(balance)
	{
		cout << "Constructor called\n";
	}

	public:
	void get_details()
	{
		cout << "Details :\nId : "<< id << "\nBalance : "<< balance << endl;
	}
};


int main()
{
	Bank_customer C1;
	C1.get_details();
	return 0;
}


