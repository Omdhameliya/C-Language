#include<stdio.h>
#include<conio.h>

main()
{
 int a,b,c;
 clrscr();
 printf("enter the value of a,band c : ");
 scanf("%d%d%d",&a,&b,&c);
 (a>b)
	? (a>c) ? printf("a is max") : printf("c is max")

	: (b>c) ? printf("b is max") : printf("c is max");




 getch();
}

