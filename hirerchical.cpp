#include<iostream>
using namespace std;
class number
{
	protected:
		int a,b;
		public:
			void input(int x,int y)
			{
				a=x;
				b=y;
			}
};
class sum: public number
{
	private:
		int s;
		public:
			void display()
			{
				s=a+b;
				cout<<"sum="<<s<<endl;
			}
};
class difference: public number
{
	private:
		int d;
		public:
			void display()
			{
				d=a-b;
				cout<<"difference="<<d<<endl;
			}
};
int main()
{
	sum s1;
	difference d1;
	s1.input(20,10);
	s1.sum::display();
	d1.input(40,30);
	d1.difference::display();
	return 0;
}
