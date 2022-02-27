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
		void add(time t1,time t2);	
};
void time::add(time t1,time t2){
	hrs=t1.hrs+t2.hrs ;
	min=t1.min+t2.min;
	sec=t1.sec+t2.sec;
	while(sec>=60 || min>=60){
		sec=sec-60; min++;
		min=min-60;hrs++;
	}
}
int main(){
	time time1(12,61,63);
	time time2(2,59,61);
	time time3;
	time3.add(time1,time2);
	time1.display();
	time2.display();
	time3.display();
	return 0;
}
