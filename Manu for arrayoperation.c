#include<stdio.h>
#include<stdlib.h>
int a[10],pos,elem;
int n=0;
void create()
{
	int i;
	printf("\n Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}

void display()
{
	int i;
	if(n==0)
	{
		printf("No element to display\n");
		return;
	}
	printf("\nArray elements are:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}

void insert()
{
	int i;
	if(n==10)
	{
		printf("Array is full, Insertion is not possible");
		return;
	}
	do
	{
	  printf("Enter valid position where element to be inserted:");
	  scanf("%d",&pos);	
	}while(pos>n);
	printf("Enter the value to be inserted\n");
	scanf("%d",&elem);
	for(i=n-1;i>pos;i--)
	a[i+1]=a[i];
	a[pos]=elem;
	n=n+1;
	display();
}

void del()
{
	int i;
	if(n==0)
	{
		printf("Array is empty and no elements to be deleted:");
		return;
	}
	do
	{
	printf("Enter a valid position from where wlwmwnt to be deleted:");
	scanf("%d",&pos);
	}while(pos>=n);
	elem=a[pos];
	printf("Deleted element is %s\n",elem);
	for(i=pos;i<n-1;i++)
	a[i]=a[i+1];
	n=n-1;
	display();
}

void main()
{
	int choice;
	while(1)
	{
	printf("\n\nMENU");
	printf("\n=>1.Create an array of N integers");
	printf("\n=>2.Display of an array elements");
	printf("\n=>3.Insert element at given pos");
	printf("\n=>4.Delete an element at a given position");
	printf("\n=>5.Exit");
	printf("\n=>6.Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:create();
		break;
		case 2:display();
		break;
		case 3:insert();
		break;
		case 4:del();
		break;
		case 5:exit(1);
		break;
		default:
			printf("\n Please enter a valid choice");
	}
	}
}
