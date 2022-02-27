#include<iostream>
 using namespace std;
class sum
{
	private:
		int *x,*y;
		public:
			sum(int a, int b)
			{
				x=new int ;
				y=new int;
				*x=a;
				*x=b;
			}
			void display()
			{
				int s;
				s=*x+*y;
				cout<<"sum="<<s<< endl;
			}
};
int main()
{
	
	sum p(3,7);
	p.display();
	return 0;
}

