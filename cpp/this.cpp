/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<iostream>
using namespace std;

class thisClass{
	int x = 20;

	public:
	void setX(int x)
	{
		cout << "x = " << this->x << endl;
		this->x = x;
		cout << "this x : " << this->x <<endl << "x = " <<x<<endl;
	}
};

int main()
{
	thisClass c;
	c.setX(10);

	return 0;
}


