#include<iostream>
using namespace std;
class one;
class two{
	private: int b;
	public:
		void input(int y)
		{
			b=y;
			
		 } 
		 friend void greatest(one p,two q );
};
class one{
		private: int a;
	public:
		void input(int x)
		{
			a=x;
			
		 } 
		 friend void greatest(one p,two q);
	
};
void greatest(one p,two q)
{
	if(p.a>q.b)
	{
		cout<<"a is greatest"<<endl;
	}
	else 
	{
		cout<<"b is greatest"<<endl;
	}
}
int main()
{
	one o;
	two t;
	o.input(5);
	t.input(10);
	greatest(o,t);
	return 0;
}
