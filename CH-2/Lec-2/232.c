#include <stdio.h>

void div()
{
	int v,ans;
	printf("enter value =");
	scanf("%d",&v);
    if(v%3==0 && v%5==0)
    {
    	printf(" NUMBER IS DIVISIBLE BY 3 AND 5");
	}
	else
	{
		printf(" NUMBER IS NOT DIVISIBLE BY 3 AND 5");
	}
}

main()
{
	div();
}
