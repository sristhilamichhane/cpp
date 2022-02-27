#include<iostream>
#include<string>
using namespace std;
class student 
{
	protected:
		int roll;string name;
		public:
			void getinfo()
			{
	        cout<<"enter name";
			getline(cin,name);
			cout<<"enter rollno";
			cin>>roll;
		}
				
			
};
class test:virtual public student
{
	protected:
		int marks;
		public:
			void getmarks(float m)
			{
				marks=m;
			}
};
class attd: virtual public student
{
	protected:
		float per;
		public:
			void getper(float p)
			{
				per=p;
			}
			
};
class result: public test,public attd
{
	private:
		char re;
		public:
			void display()
			{
				re=marks<45?'f':'p';
				cout<< roll<<" "<<name<<" "<<marks<<" "<<per<<" "<<re<<endl;
				
			}
		
};
int main()
{
	result r1;
	r1.getinfo();
	r1.getmarks(87.5);
	r1.getper(82.2);
	r1.display();
	return 0;
}
