/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<iostream>
using namespace std;

int add(int &n1, int &n2)
{
	return n1 + n2;
}

int main()
{
	int num1 = 5, num2 = 20;
	cout << "num1 = " << num1 << endl << "num2 = " <<num2<<endl;
	cout << add(num1, num2) << endl;
	return 0;
}


