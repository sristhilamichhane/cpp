#include<iostream>
#include<string>
using namespace std;
class student{
	private:
		int roll;
		string name;
		float marks;
		public:
			void getdata();
			void putdata();
};
void student::getdata(){
	cout<<"enter roll";
	cin>>roll;
	cout<<"enter full name"<<endl;
	getline( cin, name);
	cout<<"enter marks";
	cin>>marks;
}
void student::putdata(){
	cout<<roll<<" "<<name<<" "<<marks<<endl;
	
}
int main(){
	student s1;
	s1.getdata();
	s1.putdata();
	return 0;
}
