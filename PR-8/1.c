#include<stdio.h>
#define p printf
#define s scanf
int main()
{
	int i,j,*a,*b,c;
	
	p("Enter the value of a & b = ");
	s("%d%d",&i,&j);
	p("Before the swapping\na = %d\nb = %d\n",i,j);
	
	a=&i;
	b=&j;
	
	c=*b;
	*b=*a;
	*a=c;
	
	p("After the swapping \na = %d\nb = %d\n",i,j);
}
