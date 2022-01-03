#include<stdio.h>
#include<stdlib.h>
int graph[100][100];
int visited[100],parent[100],key[100];
int size;
void input(int n)
{
    int i,j;
    size=n;
    printf("\nEnter the weight for each pair\nEnter 0 if the edge does not exist\n\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d-->%d : ",i,j);
            scanf("%d",&graph[i][j]);
        }
    }
    printf("The graph is:\n");
    for(i=0;i<size;i++)
    {
    for(j=0;j<size;j++)
        printf("%d\t",graph[i][j]);
        printf("\n");
    }
}

int min_val()
{
    int i,min=999,index;
    for(i=0;i<size;i++)
    {
        if(visited[i]==0 && key[i]<min) 
        {
            min=key[i];
            index=i;
        }
    }
    return index;
}

void displayEdge()
{
    int i=0,cost=0,j=0;
    printf("\nThe selected edges are:\nEdge\tWeight\n");
    for(i=1;i<size;i++)
    {
        printf("%d-->%d\t: %d\n",parent[i],i,graph[i][parent[i]]);
        cost=cost+graph[i][parent[i]];
    }
    printf("\nThe total cost of MST is %d",cost);
}

void prims()
{
    int i,j,u;
    for(i=0;i<size;i++)
    {
        key[i]=999;
        visited[i]=0;
    }
    key[0]=0;
    parent[0]=-1;
    for(i=0;i<size-1;i++)
    {
        u=min_val(); //find the nearby vertex
        visited[u]=1; //visited vertex is marked 1
        for(j=0;j<size;j++) //for the connected vertex of u
        {
            if(graph[u][j]!=0 && visited[j]==0 && graph[u][j]<key[j])
            {
                parent[j]=u;
                key[j]=graph[u][j];
            }
        }//end of j for loop
    }   //end of i for loop
    displayEdge();
}

int main()
{
    int size;
    //printf("\t\t\tMinimum Spanning Tree using Prim's Algorithm\n");
    printf("INPUT :\nEnter the number of vertices of the graph : ");
    scanf("%d",&size);
    input(size);
    printf("\nOUTPUT :\n");
    prims();
    return 0;
}

