#include<iostream>
using namespace std;
class customer
{
	private:
		int ac_n;
		string name;
		int balance;
		public:
			void getdata ()
			{
				cout<<"enter name\n";
				getline(cin, name);
				cout<<"enter account number";
				cin>>ac_n;
				cout<<"enter balance";
				cin>>balance;
			}
			void showdata()
			{
			cout<<"the account no is"<<ac_n<<endl;
			cout<<"the name is "<<name<<""<<endl;
			cout<<"the balance is "<<balance<<endl;
			}
			
};
int main()
{
	customer c;
	c.getdata();
	c.showdata();
	c.getdata();
	c.showdata();
	c.getdata();
	c.showdata();
	return 0;
}

