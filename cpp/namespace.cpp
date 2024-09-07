/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<iostream>
using namespace std;

namespace MyNamespace {
    int myVar = 5;
}

class MyClass{
	public:
		static int myStatic;
		int myVar = 300;
};

int MyClass::myStatic = 100;

int main() {
    int myVar = 10;
    cout <<"namespace myVar"<< MyNamespace::myVar << endl; // Accesses myVar in MyNamespace
	cout <<"My class myVar: " << MyClass::myVar << endl;
	cout <<"main myVar: " << myVar << endl;

    return 0;
}
