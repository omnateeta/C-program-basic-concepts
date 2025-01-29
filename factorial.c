//This program is about factorial of numbers
#include<stdio.h>
int main()
{
	int i,num,fact=1;
	printf("Enter your factorial number:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
		printf("%d\n",fact);
	}
	printf("factorial of %d number is %d \n",num,fact);
	return 0;
}
//In output enter :ex,3,4,5 etc
