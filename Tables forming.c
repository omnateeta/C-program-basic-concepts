//This program can write any number of tables
#include<stdio.h>
int main()
{
	int tbno,product,i=1;
	printf("Enter ur Table number:\t");
	scanf("%d",&tbno);
	
  
    	while(i<=10)
	{
		product=tbno*i;
	    printf("%d*%d=%d\n",tbno,i,product);
		i=i+1;
	}
    return 0;
	
}
