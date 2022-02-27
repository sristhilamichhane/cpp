#include<iostream>
using namespace std;
class num1
{
	protected:
		int x;
		public:
			void getdata(int a)
			{x=a;
			}
};
class num2
{
	protected:
		int y;
		public:
			void getdata(int b)
			{
				y=b;
			}
			
};
class sum: public num1, public num2
{
	private:
		int s;
		public:
			void display()
			{
				s=x+y;
				cout<<"sum="<<s<<endl;
			}
};
int main(){
	sum s1;
	s1.num1::getdata(2);
	s1.num2::getdata(3);
	s1.display();
	return 0;
	
}
