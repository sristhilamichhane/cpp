#include<iostream>
using namespace std;
class number
{
	protected:
		int x,y;
		public:
			number(int a,int b)
			{
				x=a;
				y=b;
			}
};
class sum:public number
{
	int s;
	public:
		sum(int a,int b):number(a,b)
		{
			
		}
		void display()
		{
			s=x+y;
			cout<<"sum="<<s<<endl;
		}
};
int main()
{
	sum s1(8,4);
	s1.display();
	return 0;
}
