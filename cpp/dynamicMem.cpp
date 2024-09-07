/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<iostream>
#include<cstring>
using namespace std;

class Employee
{
	int id;
	char *name;

	public:
	Employee(int id = 10, const char *name ="def name"): id(id)
	{
		cout <<"constructor called\n";
		this -> name = new char [20];
		strcpy(this -> name, name);
	}

	Employee(Employee &emp)
	{
		cout <<"Copy constructor\n";
		id = emp.id;
		name = new char[20];
		strcpy(name, emp.name);
	}


	~Employee()
	{
		cout <<"Destructor called\n";
		delete[] name;
	}

};


int main()
{
	Employee E1;
	Employee E2 = E1;
	return 0;
}


