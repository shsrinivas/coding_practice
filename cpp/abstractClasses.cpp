/*
Name: Shreya Srinivas
Date:
Description:
Sample Input:
Sample Output:
*/

#include<iostream>
using namespace std;

class Shapes
{
	protected:
		int w,h;

	public:
	Shapes(int w = 1, int h = 1):w(w),h(h)
	{
		//cout<<"Shapes const called\n";
	}

#if 0
	virtual
	int area()
	{
		cout<<"Area of shapes called\n";
		return w*h;
	}
#endif
#if 1
	virtual int area() = 0;
#endif
};

class Rect : public Shapes{
	public:
	Rect(int w = 2, int h = 3):Shapes(w, h)
	{
		//cout<<"Rect const called\n";
	}
	int area()
	{
		cout<<"Area of Rect called\n";
		return w*h;
	}

};


class Sqr : public Shapes{
	public:
	Sqr(int w = 4, int h = 4):Shapes(w, h)
	{
		//cout<<"Rect const called\n";
	}
	/*
	int area()
	{
		cout<<"Area of Sqr called\n";
		return w*h;
	}
	*/
};


int main()
{
	//Shapes *s1 = new Shapes(10,20);
	//cout << s1 -> area() << endl;
	Shapes *s2 = new Rect(2,3);
	cout << s2 -> area() << endl;
	Shapes *s3 = new Sqr;
	cout << s3 -> area() << endl;

	return 0;
}


