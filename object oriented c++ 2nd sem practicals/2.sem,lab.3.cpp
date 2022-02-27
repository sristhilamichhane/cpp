#include<iostream>
using namespace std;
class one;
class two
{
	int num2;
	public:
		void getdata(int n)
		{
			num2=n;
		}
		friend void comp(one,two);
};
class one
{
	int num1;
	public:
		void getdata(int m)
		{
			num1=m;
		}
		friend void comp(one,two);
};
void comp(one o,two t)
{
	if(o.num1>t.num2)
	cout<<"num1 is greater"<<endl;
	else
	cout<<"num2 is greatest"<<endl;
}
int main()
{
	one x;
	two y;
	x.getdata(5);
	y.getdata(10);
	comp(x,y);
	return 0;
}
