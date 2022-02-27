/*

*/

#include <iostream>
using namespace std;
 
class Time{
	int hours;
	int minutes;
	int seconds;
	
	public:
		Time(int hrs,int min,int sec){
		hours= hrs;
		minutes= min;
		seconds = sec;	
			
			
		}
		
		
		void add(Time T1,Time T2){
			
			this->seconds=T1.seconds+T2.seconds;
    this->minutes=T1.minutes+T2.minutes + this->seconds/60;;
    this->hours= T1.hours+T2.hours + (this->minutes/60);
    this->minutes %=60;
    this->seconds %=60;
		}
		
	void showTime()	;
		
		
};


void Time::showTime()
{
    cout << endl;
    cout << "Time after add: ";
    cout << hours << ":" << minutes << ":" << seconds << endl;
}


int main()
{
	
	Time T1(3,44,55);
	Time T2(4,44,55);
	
	T2.add(T1,T2);
	T2.showTime();
	return 0;
}

