#include<iostream>
using namespace std;
class student{
	protected:
		char name[30];
		int roll;
		public:
			void getinfo()
			{
				cout<<"enter name";
				cin>>name;
				cout<<"enter roll";
				cin>>roll;
			}
};
class test: virtual public student{
	protected:
		float mathsM,engM;
		public:
			void getmarks(float m,float e)
			{
				mathsM=m;
				engM=e;
			}
};
class sports: virtual public student{
	protected:
		int score;
		public:
			void getscore(int s)
			{
				score=s;
			}
};
class result:public test, public sports{
	private: float total;
	public:
		void display(){
			total= mathsM+engM+score ;
			cout<<name<<" "<<roll<<" "<<mathsM <<" "<<engM<<" "<<score<<" "<<" "<<total<<" "<<endl;
		}
};
int main()
{
	result r1;
	r1.getinfo();
	r1.getmarks(80,80);
	r1.getscore(20);
	r1.display();
	return 0;
}
