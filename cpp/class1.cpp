#include<iostream>
using namespace std;

//All are public
struct sEmp
{
	int id;
	string name;
	string addr;
};

//All are private
class eEmp
{
	public:
	int id;
	string name;
	string addr;
};

int main()
{
	sEmp emp1;
	eEmp emp2;
	cout << "Size of struct: " << sizeof(emp1) << endl;
	cout << "Size of class : " << sizeof(emp1) << endl;

	emp1.name = "Shreya";
	emp2.name = "Shreeja";

	return 0;
}


