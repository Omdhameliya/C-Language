#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,c;
 clrscr();

 printf("Enter Value Of A = ");
 scanf("%d",&a);
 printf("Enter Value Of B = ");
 scanf("%d",&b);
 printf("Enter Value Of C = ");
 scanf("%d",&c);

 if(a==b && b==c && c==a)
 {
    printf("All are same.");
 }
 else if(a==b && a!=c)
 {
    if(a<c)
    {
    printf("A and B are same.");
    }
    else
    {
    printf("C is min.");
    }
 }
 else if(b==c && c!=a)
 {
    if(b<a)
    {
    printf("B and C are same.");
    }
    else
    {
    printf("A is min");
    }
 }
 else if(a==c && c!=b)
 {
    if(a<b)
    {
    printf("A and C are same.");
    }
    else
    {
    printf("B is min");
    }
 }
 else if(a<b)
 {
    if(a<c)
    {
       printf("A is min.");
    }
    else
    {
       printf("C is min.");
    }
 }
 else
 {
    if(b<c)
    {
       printf("B is min.");
    }
    else
    {
       printf("C is min.");
    }

 }
 getch();
}