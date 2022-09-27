#include<stdio.h>
#include<conio.h>

main()
{
 int a,b;
 clrscr();

  printf("Enter Value Of A = ");
  scanf("%d",&a);

  if(a == 0)
  {
    printf("A is Nuteral.");
  }
  else if(a > 0)
  {
    printf("A is Positive.");
  }  else
  {
    printf("A is Negative.");
  }
 getch();
}