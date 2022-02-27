#include<iostream>
#include<string.h>
using namespace std;
class person{
	protected: char name[30];
	           int age;
	           char address[30];
	public: person()
	{
		cout<<"enter name";
		cin>>name;
		cout<<"enter age";
		cin>>age;
		cout<<"enter address";
		cin>>address;
			  }          
};
class teacher: virtual public person{
	private: char department[30];
	         char qualification[30];
	public: teacher():person()
	{
		cout<<"enter department";
		cin>>department;
		cout<<"enter qualification";
		cin>>qualification;
			 }         
			 void showdata()
			 {
			 	cout<<name<<" "<<age<<" "<<address<<" "<<qualification<<" "<<department<<" "<<endl;
			 }
};
class student: virtual public person{
	private: char program[30];
             char semester[30];
	public: student():person()
	{
		cout<<"enter program";
		cin>>program;
		cout<<" enter semester";
		cin>>semester;
					}
				 void showdata()
			 {
			 	cout<<name<<" "<<age<<" "<<address<<" "<<program<<" "<<semester<<" "<<endl;
			 }			    	
};
int main()
{
	teacher t;
	student s;
	t.teacher::showdata();
	s.student::showdata();
	return 0;
}
