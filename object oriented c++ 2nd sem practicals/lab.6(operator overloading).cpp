#include<iostream>
using namespace std;
class time
{
	int hrs,min,sec;
	public:
		time(){ hrs=0;min=0;sec=0;
		}
		time(int h,int m,int s){
			hrs=h;
			min=m;
			sec=s;
		}
		void display(){
			cout<<hrs<<":"<<min<<":"<<sec<<endl;
		}
		time operator +(time t1);};
	time time:: operator +(time t1){
		time t;
	t.hrs=t1.hrs+hrs ;
	t.min=t1.min+min;
	t.sec=t1.sec+sec;
	while(t.sec>=60 || t.min>=60){
		t.sec=t.sec-60; t.min++;
		t.min=t.min-60;t.hrs++;
		return (t);
	}
}
int main(){
	time time1(12,61,63);
	time time2(2,59,61);
	time time3;
	time3= time1+time2;
	time1.display();
	time2.display();
	time3.display();
	return 0;
}
