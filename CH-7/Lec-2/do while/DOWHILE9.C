#include <stdio.h>
#include <conio.h>
main()
{
    int n,i,f;
    clrscr();
    f=i=1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);
     do
    {
	f*=i;
	i++;
    }
     while(i<=n);
    printf("The Factorial of %d is : %d",n,f);
    getch();
}