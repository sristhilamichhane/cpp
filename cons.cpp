#include<iostream>
using namespace std;
class r_area
{
	private:
		int l,b,a;
		public:
			r_area()
			{
				cout<<"enter value for l and b";
				cin>>l>>b;
			}
			void display()
			{
				a=l*b ;
				cout<<"the area is "<<a<<endl;
			}
};
int main()
{
	r_area ar;
	ar.display();
	return 0;
}
