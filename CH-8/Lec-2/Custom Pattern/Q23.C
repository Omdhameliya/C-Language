#include<stdio.h>
#include<conio.h>

main()
{
 int i,j;
 clrscr();

 for(i=1; i<=7; i++)
 {
      if(i==1 || i==4)
      {
	printf("* * *\n");
      }
      else if(i==2 || i==3)
      {
	printf("*     *\n");
      }
 }

	printf("*     *\n");
	printf("*      *\n");
	printf("*       *\n");

 getch();
}