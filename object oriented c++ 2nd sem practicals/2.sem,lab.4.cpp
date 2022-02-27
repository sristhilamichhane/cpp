#include<iostream>
using namespace std;
class area
{
	int length,width;
	public:
		area(int s,int b);
		void display();
};
area::area(int a,int b)
{
	length=a;
	width=b;
}
void area::display()
{
	int a;
	a=length*width;
	cout<<"area is:"<<a<<endl;
	
}
int main()
{
	area obj(5,15);
	obj.display();
	return 0;
}
