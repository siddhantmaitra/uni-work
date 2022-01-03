#include<stdio.h>
#include<stdlib.h>
int top=-1,front=-1,rear=-1;
int queue[100],graph[100][100],vis[100],stack[100];

void enqueue(int data,int size)
{
    if(rear==size-1) //queue full
        printf("QUEUE FULL");
    else
    {
        if(rear==-1) //empty queue
        {
            queue[++rear]=data;
            front++;
        }
        else //non-empty queue
            queue[++rear]=data;
    }
    }
int dequeue()
{
    int k;
    if(front>rear || front==-1)
    return(0);
    else
    {
        k=queue[front++];
        return(k);
    }
}

void bfs(int src,int size)
{
    int p,i;
    enqueue(src,size);
    vis[src]=1;
    p=dequeue();
    if(p!=0)
    printf("%d\t",p);
    while(p!=0)
    {
        for(i=1;i<=size;i++)
            if(graph[p][i]!=0 && vis[i]==0)
            {
                enqueue(i,size);
                vis[i]=1;
            }
            p=dequeue();
        if(p!=0)
            printf("%d\t",p);
    }
    for(i=1;i<=size;i++)
    if(vis[i]==0)
    bfs(i,size);
}

void push(int data,int size)
{
    if(top==size-1)
    printf("Stack overflow ");
    else
    stack[++top]=data;
}

int pop()
{
    int k;
    if(top==-1)
        return(0);
    else
    {
        k=stack[top--];
        return(k);
    }
}

void dfs(int src,int size)
{
    int i,k;
    push(src,size);
    vis[src]=1;
    k=pop();
    if(k!=0)
    printf("%d\t",k);
    while(k!=0)
    {
        for(i=1;i<=size;i++)
            if(graph[k][i]!=0 && vis[i]==0)
            {
                push(i,size);
                vis[i]=1;
            }
            k=pop();
        if(k!=0)
        printf("%d\t",k);
    }
    for(i=1;i<=size;i++)
        if(vis[i]==0)
         dfs(i,size);
}

void display(int size)
{
    int i,j;
    for(i=1;i<=size;i++)
    {
        for(j=1;j<=size;j++)
        {
            printf("%d\t",graph[i][j]);
        }
    printf("\n");
    }
}
void main()
{
    int size,i=0,j=0,src=1,flag=-1;
    printf("ENTER THE NUMBER VERTICES : ");
    scanf("%d",&size);
    printf("\nPRESS 1 if there an Edge exist between source and destination vertex else PRESS 0\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d-->%d : ",i+1,j+1);
            scanf("%d",&graph[i+1][j+1]);
        }
    }
    printf("\nTHE ADJACENCY MATRIX OF THE GRAPH \n");
    display(size);
    do
    {
        for(i=1;i<=size;i++)
            vis[i]=0;
            printf("\nEnter your choice :\n1.B.F.S\n2.D.F.S\nChoice : ");
            scanf("%d",&flag);
            printf("ENTER THE SOURCE VERTEX :");
            scanf("%d",&src);

        switch(flag)
        {
            case 1:bfs(src,size);
            front=-1,rear=-1;
            break;
            case 2:
            dfs(src,size);
            top=-1;
            break;
        }
    printf("\n\nPRESS 1 TO CONTINUE AND 0 TO TERMINATE : ");
    scanf("%d",&flag);
    }while(flag!=0);
}