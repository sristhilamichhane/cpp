#include<iostream>
using namespace std;
class time {
    private:
    	int hrs,min;
    	public:
    		time(){
			}
    		time(int h,int m){
    		hrs=h;
			min=m;	
			}
		operator int (){
			int dur;
			dur=hrs*60+min;
			return dur;
		}
};
int main(){
	time t(1,5);
	int duration;
	duration=t;
	cout<<duration;
	return 0;
}
