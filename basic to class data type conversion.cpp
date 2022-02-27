#include<iostream>
using namespace std;
class time {
	private:
		int hrs,min;
	public:
		time() {
		}
		time(int d) {
			hrs=d/60;
			min=d%60;
		}
		void show() {
			cout<<hrs<<":"<<min<<endl;
		}
};
int main() {
	time t;
	int duration=65;
	t=duration;
	t.show();
	return 0;
}
