//This program is about call by value.
#include<stdio.h>
void swapping(int x,int y);
int main()
{
	int a=10,b=20; 
	printf("Before swapping\n");
	printf("a=%d\nb=%d\n",a,b);
	swapping(a,b);
	printf("After swapping\n");
	printf("a=%d\nb=%d\n",a,b);
	return 0;
	
}
void swapping(int x,int y)
{
	int temp=0;
	temp=x;
	x=y;
	y=temp;
}


