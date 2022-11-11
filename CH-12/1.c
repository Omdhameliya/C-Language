#include<stdio.h>

void main()
{
	int a, b = 0;
	int *ptr;
	printf("Enter the value = ");
	scanf("%d",&a);
	ptr = &a;
	b = (*ptr)*(*ptr);
	printf("value scquare is %d",b);
}
