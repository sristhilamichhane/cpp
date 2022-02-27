#include<iostream>
using namespace std;
class college{
	protected: 
	  char cname[30];
	  char clocation[40];
	public:
		college()
		{
		cout<<"enter college name";
		cin>>cname;
		cout<<"enter location";
		cin>>clocation;
		}
};
class student: virtual public college{
	protected:
	  char sname[30];
	  int roll;
	public: 
	   student(){
	   	cout<<"enter student name";
	   	cin>>sname;
	   	cout<<"enter roll";
	   	cin>>roll;
	   }
};
class teacher: virtual public college{
	protected:
		char tname[30];
		int code;
		public:
			teacher(){
				cout<<"enter teacher name";
				cin>>tname;
				cout<<"enter code";
				cin>>code;
			}
};
class books: public student,public teacher{
	private:
		char bookname;
		public:
			books(){
				bookname = sname[30]+cname[30]+code ;
			}
		void display()
		{
			cout<<cname<<" "<<clocation<<" "<<sname<<" "<<roll<<" "<<tname<<" "<<code<<" "<<bookname<<endl;
		}
};
int main(){
	books b;
	b.display();
	return 0;
}
