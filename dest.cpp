#include<iostream>
using namespace std;
class carea
{
	private:
		float r,a;
		public:
			carea(float v)
			{
				r=v;
			}
			carea(carea &o)
			{
				r=o.r;
			}
			void display()
			{
				a=3.14*r*r;
				cout<<"area"<<a<<endl;
			}
			~carea()
			{
				cout<<"object destroyed"<<endl;
			}
};
int main()
{
	carea ar1();
	carea ar2(2.17);
	carea ar3 (ar2);
	ar1.display();
	ar2.display();
	ar3.display();
	return 0;
}
