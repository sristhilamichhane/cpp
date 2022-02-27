#include<iostream>
#include<string.h>
using namespace std;
class staff{
	protected: int staffid;
	char name[30];
	public:
		void getdata(int s, char n[30])
		{
			staffid=s;
			strcpy(name,n);
		}
		
};
class lecturer:public staff{
	protected: char subject[30];
	           char department[30];
	public:
		void getdataA(char su[], char de[])
		{
		   strcpy(subject,su);
			strcpy(department,de);
		}
		void displayA()
		{
			cout<<"staff id:"<<staffid<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"subject:"<<subject<<endl;
			cout<<"department:"<<department<<endl;
		}
		
};
class administrative:public staff{
	protected: char post[30];
	           char departments[30];
	public:
		void getdataB(char p[], char dep[])
		{
			strcpy(post,p);
			strcpy(departments,dep);
		}
		void displayB()
		{
			cout<<"staff id:"<<staffid<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"post:"<<post<<endl;
			cout<<"departments:"<<departments<<endl;
		}
		
};
int main()
{
	lecturer l;
	administrative A;
	l.getdata(1,"sristhi");
	l.getdataA("physics","science");
	l.displayA();
	A.getdata(2,"pooja");
	A.getdataB("maths","technology");
	A.displayB();
	return 0;
	
}
