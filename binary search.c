#include<stdio.h>
int main()
{
	int i,n,a[10],ser,LB,UB,mid;
	printf("Enter n value:");
	scanf("%d",&n);
	printf("Enter %d array elements\n",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter search element:");
	scanf("%d",&ser);
	
	LB=1;
	UB=n;
	mid=(LB+UB)/2;
	while(LB<=UB)
	{
		if(a[mid]<ser)
		LB=mid+1;
		else if(a[mid]==ser)
		{
	
	printf("Element found at %d position.",mid);
	exit (0);
       }   
	   else
	   UB=mid-1;
	   mid=(LB+UB)/2;
	   
	   if(LB>UB)
	   {
	   printf("Not found\n");
	   } 
     }
	return 0;
}
