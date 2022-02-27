#include<iostream>
using namespace std;
class result{
	private:
		int n;
		public:
			void input ();
			void display();
};
void result::input()
{
	cout<<"enter number";
	cin>>n;
}
void result::display()
{
	if (n%2==0)
	cout<<"the number is even";
	else
	cout<<"the number is odd"<<endl;
	
}
int main()
{
	result r;
	r.input();
	r.display();
	return 0;
}

