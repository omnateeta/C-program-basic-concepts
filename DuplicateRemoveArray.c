#include<stdio.h>
int main()
{
    int a[20],i,j,k,size;
    printf("Enter the number of array elements:");
    scanf("%d",&size);
    printf("\nEnter the number of elements\n");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    for(i=1;i<size;i++)
     {
        for(j=i+1;j<size;j++)
        if(a[i]==a[j])
        {
            for(k=j;k<size;k++)
             {
                a[k]=a[k+1];
                size--;
                j--;
             }
        }
     }
     printf("The Removed Duplicates from Array:");
     return 0;
}
