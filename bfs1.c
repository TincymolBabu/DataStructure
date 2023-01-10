#include<stdio.h>
int n,visited[10],queue[10],i,j,rear=-1,front=-1,v;
int adj[10][10];
void bfs(int v)
{
for(i=1;i<=n;i++)
if(adj[v][i] && !visited[i])
queue[++rear]=i;
if(front<=rear)
{
visited[queue[front]]=1;
bfs(queue[front++]);
}
}

void main()
{
printf("enter the number of vertices");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
queue[i]=0;
visited[i]=0;
}
printf("enter the edges in the matrix form");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&adj[i][j]);
printf("enter the starting vertex \n");
scanf("%d",&v);
bfs(v);
printf("the vertices which are reachable\n");
for(i=1;i<=n;i++)
{
if(visited[i]==1)
{
printf("%d",i);
}
else
{
printf("bfs is not possible ,not nodes are reachable");
}
}
}

