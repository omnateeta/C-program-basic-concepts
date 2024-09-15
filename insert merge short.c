 #include<stdio.h>
 #include<stdlib.h>
 insertion_sort()
 {
 	int i,j,a[10],n,temp;
 	printf("Enter the value of n:");
 	scanf("%d",&n);
 	printf("Enter n elements\n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 for(i=0;i<n;i++)
	 {
	 	j=i;
	 	while(j>=1)
	 	{
	 		if(a[j]<=1)
	 		{
	 			temp=a[j];
	 			a[j]=a[j-1];
	 			a[j-1]=temp;
			 }
			 j=j-1;
		 }
	 }
	 printf("Sorted array elements are\n");
	 for(i=0;i<n;i++)
	 printf("%d\n",a[i]);
 }
 merging()
 {
 	int i,j,a[10],b[10],m,n,temp,c[20],k=0;
 	printf("Enter the value of n:");
 	scanf("%d",&n);
 	printf("Enter the n elements in sorted order\n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 printf("Enter the m value:");
	 scanf("%d",&m);
	 printf("Enter the m elements in sorted order\n");
	 for(j=0;j<m;j++)
	 scanf("%d",&b[j]);
	 
	 i=0;j=0;
	 while(i<n && j<m)
	 {
	 	if(a[i]<b[j])
	 	{
	 		c[k++]=a[i++];
		 }
		 else
		 c[k++]=b[j++];
	 }
	 while(i<n)
	 c[k++]=a[i++];
	 while(j<m)
	 c[k++]=b[j++];
	 printf("Sorted array elements are\n");
	 for(i=0;i<m+n;i++)
	 printf("%d\n",c[i]);	 
 }
 int main()
 {
 	int ch;
 	while(1)
 	{
 		printf("\n\nMENU\n");
 		printf("1.Insertion sort\n");
 		printf("2.Merging teo sorted array\n");
 		printf("3.Exit\n");
 		printf("Enter youe choice\n");
 		scanf("%d",&ch);
 		switch(ch)
 		{
 			case 1:insertion_sort();
 			break;
 			case 2:merging();
 			break;
 			case 3:exit(1);
 			break;
 			default:
 				printf("Invalid choice.\n");
 				
		 }
	 }
 }
