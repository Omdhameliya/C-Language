#include<stdio.h>

main()
{
	int a[100],b[100],c[100];
	int j,i,n1,n2;
		
	printf("how many elements a[] : ");
	scanf("%d",&n1);
	
	for(i=0; i<n1; i++)
    {
    	printf("a[%d]=",i);
    	scanf("%d",&a[i]);
	}
	
	printf("\n\n array a[] is :\n\n");
	
	for(i=0; i<n1; i++)
	{
		printf("%d ",a[i]);
    }
    
    
	printf("\n\nhow many elements b[] : ");
	scanf("%d",&n2);
	
	for(i=0; i<n2; i++)
    {
    	printf("b[%d]=",i);
    	scanf("%d",&b[i]);
	}
	
	printf("\n\n array b[] is :\n\n");
	
	for(i=0; i<n2; i++)
	{
		printf("%d ",b[i]);
    }
    
    printf("\n\n array c[] : ");
    
    for(i=0; i<n1; i++)
    {
    	c[i]=a[i];
	}
	
	for(i=0, j=4; i<n1, j<n1+n2; i++, j++)
	{
	    c[j]=b[i];
	}
	
	for(i=0; i<n1+n2; i++)
	{ 
	    printf("%d ",c[i]);
    }
}









