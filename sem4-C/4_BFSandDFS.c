#include <stdio.h>
int a[20][20], q[20], visited[20], n, i, j, f = 0, r = -1, s[20], top = -1;
void bfs(int v);
void dfs(int v);

void main()
{
    int v, choice;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("\nEnter the adjacency matrix:\n");
    for (i = 0; i < n; i++)
    {
        q[i] = 0;
        s[i] = 0;
        visited[i] = 0;
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter the starting vertex: ");
    scanf("%d", &v);
    printf("\nFor BFS enter 0 : ");
    printf("\nFor DFS enter 1 : \n");
    
    scanf("%d", &choice);
    if (choice)
    {
        dfs(v);
    }
    else
    {
        bfs(v);
    }
    printf("\nThe reachable nodes are: ");
    for (i = 0; i < n; i++)
    {
        if (visited[i])
        {
            printf("%d ", i);
        }
    }
}

void bfs(int v)
{
    for (i = 0; i < n; i++)
    {
        if (a[v][i] && !visited[i])
        {
            q[++r] = i;
        }
    }
    if (f <= r)
    {
        visited[q[f]] = 1;
        bfs(q[++f]);
    }
}

void dfs(int v)
{
    for (i = 0; i < n; i++)
    {
       if (a[v][i] && !visited[i])
        {
           s[++top] = i;
        }
    }   

    if (top != -1)
    {
        visited[s[top]] = 1;
        dfs(s[top--]);
    }
}


