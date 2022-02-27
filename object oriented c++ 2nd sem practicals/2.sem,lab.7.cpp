#include<iostream>
#include<string>
using namespace std;
class student{
	int roll;
	string name;
    char address[30];
	public:
		void input()
		{
			cout<<"enter name";
			getline(cin,name);
			cout<<"enter roll";
			cin>>roll;
			cout<<"enter address"<<endl;
			cin>>address;
		}
		void display()
		{
			cout<<"NAME:"<<name<<endl;
			cout<<"ADDRESS:"<<address;
			cout<<"ROLL:"<<roll<<endl;
		}
};
int main()
{
	student *s1,*s2,*s3,*s4,*s5;
	s1= new student;
	s1->input();
	s1->display();
	s2= new student;
	s2->input();
	s2->display();
	s3=new student;
	s3->input();
	s3->display();
	s4= new student;
	s4->input();
	s4->display();
	s5=new student;
	s5->input();
	s5->display();
	delete s1,s2,s3,s4,s5;
	return 0;
}
