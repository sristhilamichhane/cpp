#include<iostream>
#include<string.h>
using namespace std;
class person{
	protected:
		char na[30];
		int age;
		char add[30];
		public:
			person(){}
			person(char n[],int a,char ad[])
			{
				strcpy(na,n);
				age=a;
				strcpy(add,ad);
			}
};
class teacher:public person{
	private:
		char qul[30];
		char depart[30];
		public:
			teacher(){
			};
			teacher(char n[],int a,char ad[],char q[],char d[]):person(n,a,ad)
			{
				strcpy(qul,q);
				strcpy(depart,d);
			}
			void display(){
				cout<<na<<","<<age<<","<<add<<","<<qul<<","<<depart<<endl;
			}
};
class student:public person{
	private:
		char prog[30];
		char sem[30];
		public:
			student(){
			};
			student(char n[],int a,char ad[],char p[],char s[]):person(n,a,ad)
			{
				strcpy(prog,p);
				strcpy(sem,s);
			}
			void display(){
				cout<<na<<","<<age<<","<<add<<","<<prog<<","<<sem<<endl;
			}
};
int main()
{
	teacher te("laxman",38,"pkr","master","physics");
	student st("sristhi",18,"ktm","BE","ii");
	te.display();
	st.display();
	return 0;
	}
