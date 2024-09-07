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

class Employee{
	int id;
	char *name;

	public:
	Employee(int id = 0,char *name = "defName"):id(id),name(name)
	{
		cout << "constructor called\n";
		//this -> name = new char [20];
		//strcpy(name,"Shreya");
		//strcpy(this -> name, name);
	}

	void diaplay(void)
	{
		cout << id << endl;
		cout << name << endl;
	}

	~Employee()
	{
		delete[] name;
	}
};

int main()
{
	Employee E1;
	E1.diaplay();
	return 0;
}


