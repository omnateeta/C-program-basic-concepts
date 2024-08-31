//generate inverted pyramid of number
#include<stdio.h>
int main()
{
	int i,j,row;
	printf("Enter the number of rows\n");
	scanf("%d",&row);
	for(i=row;i>=1;--i)
	{
		for(j=1;j<=i;++j)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
	
}
