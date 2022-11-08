#include<stdio.h>

int add(int a,int b)
	{
		return a+b;
	}
int sub(int a,int b)
	{
		return a-b;
	}
int multi(int a,int b)
	{
		return a*b;
	}
int div(int a,int b)
	{
		return a/b;
	}

main()
{
	int n;
	int a,b,ans;

	do{
	printf("\nEnter 1 For Addition \n");
	printf("Enter 2 For Subtraction \n");
	printf("Enter 3 For Multiplication \n");
	printf("Enter 4 For Division \n");
	printf("Enter 5 For Exit \n\n");
	
	printf("Enter Your Choice : ");
	scanf("%d",&n);


	switch(n)
	{
		if(n>=1 && n>=5)
		{
		
	printf("Enter Value A: ");
	scanf("%d",&a);
	printf("Enter Value B: ");
	scanf("%d",&b);
	printf("\n");
		
		case 1 :
					ans = add(a,b);
					printf("Answer Is = %d\n",ans );
				 	break;				 
		case 2 :
					ans = sub(a,b);
					printf("Answer Is = %d\n",ans );
					break;
		case 3 :
					ans = multi(a,b);
					printf("Answer Is = %d\n",ans );
					break;
		case 4 :
					ans = div(a,b);
					printf("Answer Is = %d\n",ans );
					break;
		case 5 :
					break;
	}

	else
	{
		printf("Invalide Choice ...");
	}
}
	}while(n!=5);

}

