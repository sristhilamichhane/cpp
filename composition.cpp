#include<iostream>
using namespace std;
class area
{
	private: int l,b;
	public: int rarea(int x ,int y)
	{
		l=x;
		b=y;
		return l*b;
	}
};
class showarea
{
	private:
		area a;
		public: 
		void display()
		{
			cout<<"area="<<a.rarea(7,3);
		}
};
int main()
{
	showarea s;
	s.display();
	return 0;
}
