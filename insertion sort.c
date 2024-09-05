//Insertion sort for c program
#include<stdio.h>
int main()
{
	int i,j,a[10],temp,n;
	printf("Enter n value:");
	scanf("%d",&n);
	printf("Enter %d array elements\n",n);
	for(i=1;i<=n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		j=i;
		while(j>=1)
		{
			if(a[j]<a[j-1])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
			j=j-1;
		}
	}
	printf("insertion sorted elements are\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
