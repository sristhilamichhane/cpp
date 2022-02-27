#include<iostream>
#include<string>
using namespace std;
class student
{
	private:
		string name;
		int roll;
		float marks;
	public:
		void getdata();
		void putdata();
		
};
	void student::getdata()
		{
		cout<<"ENTER NAME";
		getline(cin,name);
		cout<<"ENTER ROLL";
		cin>>roll;
		cout<<"ENTER MARKS";
		cin>>marks;
		};
		 void student::putdata()
		 {
		 	cout<<"NAME:"<<name<<endl;
		 	cout<<"ROLL:"<<roll<<endl;
		 	cout<<"MARKS:"<<marks<<endl;
		 }
int main()
{
	student s;
	s.getdata();
	s.putdata();
	return 0;
}
