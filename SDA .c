//Demo for Single Dimension Array
#include<stdio.h>
#define MAX 48
int main()
{
	int A[MAX],limit,i;
	printf("Enter ur limt value:\n");
	scanf("%d",&limit);
	printf("Enter array elements\n");
	for(i=0;i<limit;i++)
	{
		printf("A[%d]=",i);
		scanf("%d",&A[i]);
	}
	printf("Array elements are\n");
	for(i=0;i<limit;i++)
	{
		printf("A[%d]=%d\n",i,A[i]);
	}
	return 0;
}
