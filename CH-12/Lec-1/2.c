#include<stdio.h>

void main()
{
	int i,j,*a,*b,c;
	
	printf("Enter the value of a & b = ");
	scanf("%d%d",&i,&j);
	printf("Before the swapping\na = %d\nb = %d\n",i,j);
	
	a=&i;
	b=&j;
	
	c=*b;
	*b=*a;
	*a=c;
	
	printf("swapping is \na = %d\nb = %d\n",i,j);
}
