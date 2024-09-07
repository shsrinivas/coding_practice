/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<iostream>
using namespace std;

int main()
{
	int num = 10;
	int &var = num;
	cout << "Num = " << num << endl <<"Var = "<<var << endl;
	var = 150;
	cout << "Num = " << num << endl <<"Var = "<<var << endl;
	return 0;
}


