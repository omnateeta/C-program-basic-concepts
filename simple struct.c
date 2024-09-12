#include<stdio.h>
struct employee
{
	int id;
	char name[10];
	float sal;
};
typedef struct employee STUD;
int main()
{
	STUD e[10];
	int i,n;
    printf("Enter the number of employee details have to enter:");
    scanf("%d",&n);
    printf("Enter the employee details(id,name,sallary)\n");
    for(i=0;i<n;i++)
    {
    	scanf("%d%s%f",&e[i].id,e[i].name,&e[i].sal);
	}
	
	printf("The Employee details are as following below:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%f\n",e[i].id,e[i].name,e[i].sal);
	}
	return 0;
}
