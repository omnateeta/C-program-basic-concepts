//Pointer 
#include<stdio.h>
int main()
{
	int p,*ptr,n;
	printf("Enter the any value for an variable p=");
	scanf("%d",&p);
	printf("The address of the pointer p is %d\n",&p);
	printf("Enter new value for p:");
	scanf("%d",&n);
	ptr=&p;
	*ptr=n;
	printf("Now pointer value of p is %d",*ptr);
	return 0;
	
}
