#include<iostream>
using namespace std;
class A
{int l,b;
public:
void getarea(int x, int y)
{l=x; b=y;
cout<<"Area="<<l*b<<endl;}
};
class B
{private:A a;
public:void displayarea();};
void B::displayarea()
{a.getarea(10,20);}
int main()
{B b;
b.displayarea();
return 0;}
