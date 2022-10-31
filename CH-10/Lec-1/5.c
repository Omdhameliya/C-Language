#include<stdio.h>
main()
{
	char name[100];
	int i;
	
	printf("Enter Your Name = ");
	scanf("%s",&name);
	
	for(i=0;i<strlen(name);i++)
	{
	     if(name[i]>=65 && name[i]<=90)
	     {
	     	name[i] +=32;
		}
	     else if(name[i]>=97 && name[i]<=122)
	     {
	     	name[i] -=32;
		}
		
	}
	
     printf("Toggle %s",name);  
}
