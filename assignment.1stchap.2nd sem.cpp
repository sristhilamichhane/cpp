#include<iostream>
#include<string>

using namespace std;
class employee
{
	private:
		string name;
		int date;
		float basicsalary,totalsalary,houserent,bonus;
		public:
			employee()
			{
				cout<<"enter name";
				getline( cin, name);
				cout<<"enter date";
				cin>>date;
				cout<<"enter salary ";
				cin>> basicsalary ;
			}
			void returninformation ()
			{
				cout<<"the name is "<<name<<endl;
				cout<<"the date is "<<date<<endl;
				cout<<"enter basic salary"<<basicsalary;
				houserent=(40/100)*basicsalary;
				bonus =(20/100)*basicsalary;
				totalsalary =basicsalary+houserent+bonus;
				cout<<"total salary is"<<totalsalary<<endl;
			}
			~employee()
			{
				cout<< "destroy objects"<<endl;
			}
};
int main()
{
	employee e1,e2;
	e1.returninformation();
	e2.returninformation();
	return 0;
}

