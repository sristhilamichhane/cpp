#include<iostream>
using namespace std;
class number
{
	protected:
		int x,y;
		public:
			number()
			{
				cout<<"enter value for x and y";
				cin>>x>>y;
			}
};
class sum:public number
{
	int s;
	public:
		void display()
		{
			s=x+y;
			cout<<"sum="<<s<<endl;
		}
};
int main()
{
	sum s1;
	s1.display();
	return 0;
}
