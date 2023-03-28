#include<stdio.h>
#include<stdlib.h>
int q[10], f = 0, r = - 1;

void dfs(int graph[10][10],int n,int visited[],int u)
{
    int v;
    visited[u] = 1;
    printf("%d",u);
    for(v=0;v<n;v++)
    {
        if(visited[v] == 0 && graph[u][v] == 1)
            dfs(graph,n,visited,u);
    }
}

void enqueue(int u) 
{
    r++;
    q[r] = u;
}

int dequeue()
{
    int vertex;
    vertex = q[f];
    f++;
    return(vertex);
}

void bfs(int graph[10][10],int n,int visited[],int u)
{
    int vertex,i;
    visited[u] = 1;
    printf("%d",u);
    enqueue(u);
    while (f!=r+1)
    {
        vertex = dequeue();
        printf("Vertex value is = %d",vertex);
        for(i=0;i<n;i++)
        {
            if((graph [vertex][i] == 1) && (visited[i] == 0))
                printf("%d",i);
                visited[i] = 1;
                enqueue(i);
        }
    }
   
}

void main()
{
    int n,i,j,graph[10][10],visited[10],u;
    char choice;
    printf("Enter the number of vertexes: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&graph[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        visited[i] = 0;
    }
    printf("\n");
    
    while(1)
    {
        printf("Menue's: ");
        printf("\n1.BFS\n2.DFS\n3.Exit \n");
        printf("\nEnter your choice here: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: printf("Enter the starting vertex: ");
            scanf("%d",u);
            bfs(graph,n,visited,u);
            break;
        case 2: dfs(graph,n,visited,u);
            break;
        case 3:exit(0);
            break;
        default:printf("Invalid choice...!");
            break;
        }
    }
}
