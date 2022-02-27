#include<iostream>
#include<math.h>
using namespace std;
class rect{
	private:
		float lw,bw;
		public:
			rect(){
				
			}
			rect(float l,float b){
				lw=l;
				bw=b;
			}
			void rdisplay(){
				cout<<lw<<","<<bw<<endl;
			}
};
class polar{
	private: 
	float rad,ang;
	public:
	polar(){
	}
	polar(float rd,float an){
		rad=rd;
		ang=an;
	}
	void pdisplay(){
		cout<<rad<<","<<ang<<endl;
	}
	operator rect(){
		float l=rad*cos(ang);
		float b=rad*sin(ang);
		return rect(l,b);
	}
};
int main()
{
	rect r;
		polar p(10.0,0.78);
		r=p;
		p.pdisplay();
		r.rdisplay();
		return 0;
}
