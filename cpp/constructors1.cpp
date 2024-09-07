/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<iostream>
using namespace std;


class Student{
	public:
	int id;
	string name;
	int salary;
	public:
	Student(int id = 30, string name = "studName", int salary= 3000):id(id),name(name),salary(salary)
	{
		cout << "Student const called\n";
	}
	/*
	Student(Employee &emp)
	{
		cout << "Stud copy const called\n";
		id = emp.id;
		name = emp.name;
		salary = emp.salary;
	}*/
};

class Employee{
	int id;
	string name;
	int salary;

	public:
	//Copy constructor
	Employee(int id = 0, string name = "defName", int salary= 1000):id(id),name(name),salary(salary)
	{
		cout<<"Constructor called\n";
	}

	Employee(Employee &emp)
	{
		cout << "Copy const called\n";
		id = emp.salary;
		name = emp.name;
		salary = emp.id;
	}

	Employee(Student &s)
	{
		cout<<"Student emp const called\n";
		id = s.id;
		name = s.name;
		salary = s.salary;
	}

	void display(void)
	{
		cout << endl;
		cout << id << endl;
		cout << name << endl;
		cout << salary << endl;
	}

};


int main()
{
	Student S1;//(100,"Shreeja",2000);
	Employee E1(10,"Shreya",1000), E2(20), E3;
	Employee E4 = E1;
	//Student S2 = E1;
	Employee E5 = S1;

	E1.display();
	E2.display();
	E3.display();
	E4.display();
	E5.display();
	return 0;
}


