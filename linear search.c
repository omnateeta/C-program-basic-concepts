//C program to search an element using linear search method
#include<stdio.h>
int main()
{
	int i,n,a[10],ser;
	printf("Enter the n element\n");
	scanf("%d",&n);
	printf("Enter your array elements\n ");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter your search element:");
	scanf("%d",&ser);
	
	for(i=1;i<=n;i++)
	{
		if(ser==a[i])
		{
			printf("Element is found at %d location\n",i);
			exit (0);
		}
	
	}
	if(i>0)
	{
	  printf("Unsuccesful search.");
	}
	return 0;
}
