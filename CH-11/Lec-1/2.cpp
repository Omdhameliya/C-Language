#include<stdio.h>

void div()
{
	int n;
	printf("Enter Any Value: ");
    scanf("%d",&n);

	if(n%3==0 && n%5==0)
    {
    	printf("Your Number Is Divisable");
	}
	else
	{
		printf("Your Number Is Not Divisable");
	}
}

main()
{
	div();
}

