#include<stdio.h>
#include<conio.h>

main()
{
 int a,b;
 clrscr();

  printf("Enter Value Of A = ");
  scanf("%d",&a);
  printf("Enter Value Of B = ");
  scanf("%d",&b);

  if(a > b)
  {
    printf("B is Min.");
  }
  else if(a == b)
  {
    printf("A and B are Same.");
  }
  else
  {
    printf("A is Min.");
  }
 getch();
}