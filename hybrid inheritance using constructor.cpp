#include<iostream>
#include<string>
using namespace std;
class student 
{
	protected:
		int roll;string name;
		public:
			student(int r)
			{
				roll=r;}
};
class test:virtual public student
{
	protected:
		int marks;
		public:
			test(int r,int m):student(r)
			{
				marks=m;
			}
};
class attd: virtual public student
{
	protected:
		float per;
		public:
			attd(int r,float p):student(r)
			{
				per=p;
			}
			
};
class result: public test,public attd
{
	private:
		char re;
		public:
			result(int r, float p,int m):student(r),test(r,m),attd(r,p)
			{
			}
			
			void display()
			{
					re=marks<45?'f':'p';
				cout<< roll<<" "<<marks<<" "<<per<<" "<<re<<endl;
				
			}
		
};
int main()
{
	result r1(1,87.5,80);
	r1.display();
	return 0;
}
