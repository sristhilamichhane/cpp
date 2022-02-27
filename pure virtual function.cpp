#include<iostream>
#include<string>
using namespace std;
class media{
	protected:
		string name;
		float price;
		public:
	   media(string n, float p){
	   	name=n;
	   	price=p;
	   }
	  virtual void display()=0;
	  virtual ~media(){
	  	cout<<"destroyed"<<endl;
	  }   	
};
class mag: public media{
	int page;
		public:
			mag(string n,float p,int pg):media(n,p){
				page=pg;}
void display(){
	cout<<name<<","<<price<<","<<page<<endl;
}			
};
class cd: public media{
	 float duration;
	 public:
	 	cd(string n,float p,float d):media(n,p){
	 		duration=d;
		 }
		 void display(){
		 	cout<<name<<","<<price<<","<<duration<<endl;
		 }
};
int main(){
	media *p;
	mag m("TIMES",567,231);
	cd c("Prashad",600,2.5);
	p=&m;
	p->display();
	p=&c;
	p->display();
	return 0;
}
