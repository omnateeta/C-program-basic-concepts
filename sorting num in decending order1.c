// Shorting the in descending order
#include<stdio.h>
int main()
{
	int a[20],n,temp,i,j;
	printf("n number\n");
	scanf("%d",&n);
	printf("unsorted array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				//swapping
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("sorted element\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
