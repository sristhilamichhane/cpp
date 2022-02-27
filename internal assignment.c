#include<stdio.h>
#include<conio.h>
void main()
{
	int i=5,j=4,k=9 ;
	i=(i+k)/3+k%(j+i)+j*k%i/2 ;
	printf("%d",i);
	getch();
}
