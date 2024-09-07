/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<iostream>
using namespace std;

class Employee{
	protected:
		int id;
		string addr;
	public:
		
		Employee(int id = 0, string addr = "def"):id(id),addr(addr)
		{
			cout<<"Emp Const called\n";
		}

		~Employee()
		{
			cout<<"Emp Destr called\n";
		}
		
		void display()
		{
			cout << "ID : " << id << endl;
			cout << "Addr : " << addr << endl;
		}
};

//class newClass : accessSpecifier parentClass
//Protected access specifier is the safest class as it provides data security

class Student : protected Employee
{
	public:

		void print()
		{
			cout <<"ID : " <<id << endl;
			cout << "Addr : " << addr << endl;
		}

		Student(int id = 100, string addr = "defAddr"):Employee(id,addr)
		{
			cout <<"Student const called\n";
		}

		~Student()
		{
			cout <<"Student destr called\n";
		}
};


class Mentor : protected Employee
{
	int DOB = 100;
	public:
	void print()
	{
		cout <<"ID : " <<id << endl;
		cout << "Addr : " << addr << endl;
		cout << "DOB : " << DOB <<endl;
	}
};

int main()
{
	Student s1;
	s1.print();
	//s1.display();

	//Mentor m1;
	//m1.print();
	//m1.display();
	
	return 0;
}


