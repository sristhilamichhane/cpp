#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,z;
	int *p1,*p2;
	a=30 ; b=-a;
	p1=&a ;
	p2=&b ;
	z=*p1-*p2+30 ;
	printf("\nz=%d",z);
	getch();
}
