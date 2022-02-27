#include<iostream>
using namespace std;
void display(int a)
{ cout<<"integer"<<a<<endl;
}
void display(char c){
	cout<<"character"<<c<<endl;
}
int main()
{
	display(5);
	display('B');
	return 0;
}
