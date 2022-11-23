#include<stdio.h>

void main()
{
	FILE *p1;
	int a;
	p1  = fopen("D:\\flutter\\pr5\\1.txt","r");
	
	fscanf(p1,"%d", &a);
	printf("Value From File : %d", a);
	
	fclose(p1);
}
