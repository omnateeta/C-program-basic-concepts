//Generating a Pyramid of numbers
#include<stdio.h>
int main()
{
	int i,j,k,row;
	printf("Enter the number of rows:");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=row-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		for(k=i-1;k>=1;k--)
		{
		printf("%d",k);
	    }
	    printf("\n");
	}
	return 0;
}
