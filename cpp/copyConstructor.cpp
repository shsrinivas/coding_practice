/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<iostream>
using namespace std;

class Student
{
	public:
	int id = 560;
	string addr = "Stud addr";
	float marks = 99.9;
};

class Employee
{
	private:
	//Attributes
	int id;
	float salary;
	string name;

	public:
	//Default constructor
	Employee()
	{
		cout << "Constructor called\n";
		id = 1;
		name = "default";
		salary = 100;
	}

	Employee(int eid, string ename, float esalary)
	{
		cout << "Parameterized constructor called\n";
		id = eid;
		name = ename;
		salary = esalary;
	}

	Employee(int eid)
	{
		cout <<"Single parameter constructor called\n";
		id = eid;
	}
	
	Employee(Employee &emp)
	{
		cout <<"Copy constructor called\n";
		id = emp.id;
		name = emp.name;
		salary = emp.salary;
	}

	Employee(Student &s)
	{
		cout <<"Student Employee const called\n";
		id = s.id;
		name = s.addr;
		salary = s.marks;
	}
	//Parameterized
/*
	Employee(int id = 1, string name ="Def", int salary = 100):id(id),name(name),salary(salary)
	{
		cout << "Parameterized const called\n";
	}*/

	//Behaviors / member functions
	void get_details()
	{
		cout << "Enter the id: ";
		cin >> id;

		cout << "Enter the name: ";
		//cin >> name;
		cin.ignore(100, '\n');
		getline(cin, name);

		cout << "Enter the salary: ";
		cin >> salary;
	}

	void display_details()
	{
		cout << "The id is " <<id <<endl << "The name is " << name << endl << "The salary is " << salary << endl; 
	}
};

int main()
{
	Student s1;
	Employee emp1(46,"Shreeja",2000);
	Employee emp2;
	Employee emp3(100);
	Employee emp4 = emp1;
	Employee emp5 = s1;

	emp1.display_details();
	emp2.display_details();
	emp3.display_details();
	emp4.display_details();
	emp5.display_details();
	return 0;
}
