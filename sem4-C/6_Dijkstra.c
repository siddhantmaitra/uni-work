#include<stdio.h>
#define INF 999999
#define MAX 100

 void dijikstra (int G[MAX][MAX], int n, int stnode);

 
 
 
int 
main () 
{

    int G[MAX][MAX], i, j, n, u; 
    printf ("\nEnter the no. of vertices:: "); 
    scanf ("%d", &n);
    printf ("\nEnter the adjacency matrix::\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        scanf ("%d", &G[i][j]);
    printf ("\nEnter the starting node:: ");
    scanf ("%d", &u);
    dijikstra (G, n, u);
    return 0;

}


void dijikstra (int G[MAX][MAX], int n, int stnode) 
{
    int cost[MAX][MAX], dist[MAX], pred[MAX];
    int visited[MAX], c, mindist, ntnode, i, j;
    for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
        if (G[i][j] == 0)
        cost[i][j] = INF;
        else
        cost[i][j] = G[i][j];
    for (i = 0; i < n; i++)
    {
        dist[i] = cost[stnode][i];
        pred[i] = stnode;
        visited[i] = 0;
    }
    dist[stnode] = 0;
    visited[stnode] = 1;
    c = 1;
    while (c < n - 1)
    {
        mindist = INF;
        for (i = 0; i < n; i++)
          if (dist[i] < mindist && !visited[i])
            {
                mindist = dist[i];
                ntnode = i;
        
    
    
        }
        visited[ntnode] = 1;
        for (i = 0; i < n; i++)
            if (!visited[i])
                if (mindist + cost[ntnode][i] < dist[i])
                {
                    dist[i] = mindist + cost[ntnode][i];
                    pred[i] = ntnode;    
                }
            c++;
        
    
    
    }
    
 
 
    for (i = 0; i < n; i++)
        if (i != stnode)
        {
            printf("\nThe Distance of vertex: %d from source vertex: %d =%d", i,stnode, dist[i]);
            printf ("\nPath = %d", i);
            j = i;  
	        do      
            {
                j = pred[j];
                printf (" <-%d", j);
            }
            while (j != stnode);
        }
}


 
 
