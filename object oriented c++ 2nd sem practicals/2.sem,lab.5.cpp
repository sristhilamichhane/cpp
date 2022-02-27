#include<iostream>
using namespace std;
class code
{
	int id;
	public:
		code(){}
		code(int a){id=a;}
		code(code&x)
		{ id=x.id;
		}
		void display(void)
		{
			cout<<id<<endl;
		}
		~code()
		{
			cout<<"object destroyed"<<endl;
		}
};
int main()
{
	code a(100);
	code b(a);
	code c=a;
	a.display();
	b.display();
	c.display();
	return 0;
}
