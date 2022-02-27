#include<iostream>
using namespace std;
class data
{
	protected:
		float l,b;
		public:
			void getdata(float x,float y)
			{
				l=x;
				b=y;
			}
};
class peri:public data
{
	private:
		float p;
		public:
			void display()
			{
				p=2*(l+b);
				cout<<"perimeter="<<p<<endl;
			}
};
int main()
{
	peri p1;
	p1.getdata(12.3,3.7);
	p1.display();
	return 0;
}
