#include<iostream>
using namespace std;
class base{
	public:
		void display(){
			cout<<"base display"<<endl;
		}
		virtual void show(){
			cout<<"base show"<<endl;
		}
};
class derived : public base{
public:	void display(){
		cout<<"derived display"<<endl;
	}
	void show(){
		cout<<"derived show"<<endl;
	}
};
int main(){
	base b;
	derived d;
	base *p;
	p=&b;
	p->display();
	p->show();
	p=&d;
	p->display();
	p->show();
	return 0;
}
