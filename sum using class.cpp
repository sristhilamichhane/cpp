#include<iostream>
using namespace std;
class add{
	private:
		int a,b,sum;
		public:
			void input()
			{
				cout<<"enter values";
				cin>>a>>b;
			}
			void display()
			{
				sum=a+b;
				cout<<sum<<endl;
			}
};
int main()
{
	add s;
	s.input();
	s.display();
	return 0;
}
