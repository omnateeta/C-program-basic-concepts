#include<stdio.h>
int main()
{
	int i,n,a[10],ser;
	printf("Enter the n element value:");
	scanf("%d",&n);
	
	printf("Enter %d array elements\n",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter search element:");
	scanf("%d",&ser);
	
	for(i=1;i<=n;i++)
	{
		if(a[i]==ser)
		{
			printf("Element is found at %d location\n",i);
			exit (0);
		}
	}
		if(i>n)
		{
			printf("Element not found.\n");
		}
	

	return 0;
}
