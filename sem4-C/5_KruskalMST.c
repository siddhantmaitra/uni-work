#include<stdio.h>
#include<stdlib.h>
int min,cost=0,graph[100][100],parent[100];
void input(int n)
{
    int i,j;
    printf("\nEnter the weights for the pair of edges:\nPress 0 for non-existing edges\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("%d-->%d : ",i,j);
        scanf("%d",&graph[i][j]);
        if(graph[i][j]==0)
            graph[i][j]=999;
        }
    }
}

int find(int i)
{
    while(parent[i])
        i=parent[i];
    return i;
}
int uni(int i,int j)
{
    if(i!=j)
    {
        parent[j]=i;
        return 1;
    }
    return 0;
}

void display(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(graph[i][j]==999)
                printf("0\t");
            else
            printf("%d\t",graph[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int i,j,a,b,u,v,n,ne=1;
    //printf("***Implementation of Kruskal's algorithm***\n");
    printf("\nINPUT\nEnter the no. of vertices : ");
    scanf("%d",&n);
    input(n);
    printf("\nOUTPUT\nThe adjacency matrix of the graph is\n");
    display(n);
    printf("\nThe edges of Minimum Cost Spanning Tree are\n");
    printf("Edges\tWeight\n");
    while(ne<n)
    {
        for(i=0,min=999;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(graph[i][j]<min)
                {
                    min=graph[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        u=find(u);
        v=find(v);
        if(uni(u,v))
        {
            printf("%d-->%d\t  %d\n",a,b,min);
            ne++;
            cost=cost+min;
        }
        graph[a][b]=graph[b][a]=999;
    }
    printf("\nMinimum cost of the spanning tree is %d\n",cost);
    return 0;
}