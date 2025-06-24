#include<stdio.h>
void dij(int, int [20][20], int [20] ,int [20], int);

void main()
{
	int i,j,n,visited[10],source, cost[20][20],d[20];
	printf("\nEnter the number of vertices: ");
	scanf("%d",&n);
	printf("\n Enter the cost adjecency matrix:\n ");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
		}
	}
	printf("\n Enter the source node:");
	scanf("%d",&source);
	dij(source,cost,visited,d,n);
	for(i=2;i<=n;i++)
	  if(i!=source)
	    printf("\nShortest path from %d to %d is %d",source,i,d[i]);
}
void dij(int source, int cost[20][20],int visited[20],int d[20], int n)
{
	int i,j,min,u,w;
	for(i=1;i<=n;i++)
	{
		visited[i]=0;
		d[i]=cost[source][i];
	}
  visited[source]=1;
  d[source]=0;
  for(j=2;j<=n;j++)
  {
  	min=999;
  	for(i=1;i<=n;i++)
  	{
  		if(!visited[i])
  		{
  			if(d[i]<min)
  			{
  				min=d[i];
  				u=i;
			  }
		  }
	  }
	  visited[u]=1;
	  for(w=1;w<=n;w++)
	  {
	  	if(cost[u][w]!=999 && visited[w]==0)
	  	{
	  		if(d[w]>cost[u][w]+d[u])
	  		  d[w]=cost[u][w]+d[u];
		  }
	  }
  }
}

/*
Enter the number of vertices: 5

 Enter the cost adjecency matrix:
 0 3 999 7 999
3 0 4 2 999
999 4 0 5 6
7 2 5 0 4
999 999 6 4 0

 Enter the source node:1

Shortest path from 1 to 2 is 3
Shortest path from 1 to 3 is 7
Shortest path from 1 to 4 is 5
Shortest path from 1 to 5 is 9
--------------------------------
Process exited after 36.56 seconds with return value 5
Press any key to continue . . .
*/
