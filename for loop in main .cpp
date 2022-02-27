#include<iostream>
using namespace std;
class bank{
	private: int accnum;
	         char name[30];
	         int balance;
	         
	public:
	      void getdata()
		  {
		  	cout<<"enter account number";
		  	cin>>accnum;
		  	cout<<"enter name";
		  	cin>>name;
		  	cout<<"enter bank balance";
		  	cin>>balance;
		  	
				   }   
		void showdata()
		{
			cout<<"ACCOUNT NUMBER:"<<accnum<<endl;
			cout<<"NAME:"<<name<<endl;
			cout<<"BANK BALANCE:"<<balance<<endl;
						 }		         
};
int main()
{  int i;
	bank b[3];
	for(i=0;i<=3;i++){
		b[i].getdata();
		b[i].showdata();
		
	}
	return 0;
}
