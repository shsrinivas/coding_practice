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
	int data;
	public:
	Employee(int data):data(data){
	}

	void display(){
		cout<<"Data : "<< data << endl;
	}
};


int main()
{
#if 0
	int *ptr = new int;
	*ptr = 42;

	cout << *ptr << endl;
	delete ptr;
	return 0;
#endif
#if 0
	int size = 5;
	int *arr = new int[size];

	for(int i = 0; i < 5; i++)
	{
		arr[i] = (i+1) * 10;
	}

	for(int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}

	delete[] arr;
#endif
#if 1
	Employee *obj = new Employee(42);
	obj -> display();
	delete obj;
#endif
}


