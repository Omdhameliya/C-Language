#include<stdio.h>
#include<conio.h>

main()
{
 int a,b,c,d;
 clrscr();
 printf("enter the value of a,b and c : ");
 scanf("%d%d%d%d",&a,&b,&c,&d);
 (a>b)
      ? (a>c)
	    ? (a>d)
		  ? printf("a is max") : printf("d is max")
	    : (c>d)
		  ? printf("c is max") : printf("d is max")
      : (b>c)
	    ? (b>d)
		  ? printf("b is max") : printf("d is max")
	    : (c>d)
		  ? printf("c is max") : printf("d is max");
     getch();
     }