#include<iostream>
using namespace std;

class Employee
{
	int id;
	float salary;
	string name;

	public:
	Employee(int id = 101, float salary = 50000 ):id(id),salary(salary)
	{
		cout << "Employee Constructor called\n";
	}

	~Employee(){
		cout << "Employee Destructor called\n";	
	}

	void get_details()
	{
		cout << "Enter ID : ";
		cin >> id;
		cout << "Enter Marks : ";
		cin >> salary;
		cout << "Enter name : ";
		cin.ignore(100, '\n');
		getline(cin, name);
	}

	void display_dets()
	{
		cout << "Name : " << name << "\nID : " << id << endl << "Salary : " << salary << endl;
	}
};

class Student
{
	int id;
	float marks;

	public:
	Student(int id = 201, float marks = 30 ):id(id),marks(marks)
	{
		cout << "Student Constructor called\n";
	}

	~Student(){
		cout << "Student Destructor called\n";	
	}

	void get_details()
	{
		cout << "Enter ID : ";
		cin >> id;
		cout << "Enter Marks : ";
		cin >> marks;
	}

	void display_dets()
	{
		cout << "ID : " << id << endl << "Marks : " << marks << endl;
	}
};

int main()
{
	Employee E1;
	E1.get_details();
	Student S1;
	E1.display_dets();
	return 0;
}


