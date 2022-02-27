#include<iostream>
using namespace std;
class A
{
	public:
		void display(int a){
		cout<<a<<endl;}
};
class B: public A{
 public: void display(int a){
	cout<<"Derived"<<a<<endl;
}
};
int main(){
	B b;
	B *p;
	p=&b;
	b.display(10);
	return 0;
}
