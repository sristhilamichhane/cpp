#include<iostream>
using namespace std;
class area{
	private: int x;
	         int y;
	public:
	int getdata(int p,int q)
	{
		x=p;
		y=q;
	
		return x*y;
			 }         
};
class showarea{
	private: area a;
	public:
		void showdata(){
			cout<<"area:"<<a.getdata(5,6)<<endl;
			
		}
};
int main()
{
	showarea s;
	s.showdata();
	return 0;
}

