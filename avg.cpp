#include<iostream>
using namespace std;
class avg{
	private:
	 int x,y;
	public:
		void input(int a,int b);
		friend int av(avg o);
};
void avg::input(int a,int b)
{
	x=a;
	y=b;
 } 
 int av(avg o)
 {
 	return(o.x+o.y)/2 ;
 }
 int main()
 {
 	avg n;
 	n.input(12,6);
 	cout<<av(n);
 	return 0;
 }
