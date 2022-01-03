//Implementation of Prim's Algorithm to calculate MST with use of Greedy Method.
//MAKAUT Roll: 14800119041

#include<stdio.h>

int m,c,u,v,n,i,j,ne=1;
int visited[50]={0},min,mincost=0,cost[50][50];
int main()
{
    
    printf("\nPlease enter the number of nodes:");
    scanf("%d",&n);
    printf("\nPlease enter the adjacency matrix:\n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
        scanf("%d",&cost[i][j]);
        if(cost[i][j]==0)
            cost[i][j]=999;
        }
    visited[1]=1;
    printf("\n");
    while(ne < n)
    {
        for(i=1,min=999;i<=n;i++)
        for(j=1;j<=n;j++)
        if(cost[i][j]< min)
        if(visited[i]!=0)
        {
        min=cost[i][j];
        m=u=i;
        c=v=j;
        }
        if(visited[u]==0 || visited[v]==0)
        {
        printf("\n %d:(%d-->%d) cost:%d",ne++,m,c,min);
        mincost+=min;
        visited[c]=1;
        }
        cost[m][c]=cost[c][m]=999;
    }
    printf("\n Therefore, the minimum cost is = %d ",mincost);
    return 0;
}
