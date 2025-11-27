Aim: To perform BFS and DFS traversal on a graph 
Algorithm: 
1. Start 
2. Input adjacency matrix 
3. Use queue for BFS, recursion for DFS 
4. Stop
Program: 
#include <stdio.h> 
int n,a[10][10],visited[10]; 
void dfs(int v){int i;visited[v]=1;printf("%d 
",v);for(i=0;i<n;i++)if(a[v][i]&&!visited[i])dfs(i);} 
void bfs(int v){ 
 int q[10],f=0,r=-1,i; 
 visited[v]=1; q[++r]=v; 
 while(f<=r){ 
 v=q[f++]; printf("%d ",v); 
 for(i=0;i<n;i++) if(a[v][i]&&!visited[i]){q[++r]=i;visited[i]=1;}  } 
} 
int main(){ 
 scanf("%d",&n); 
 for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);  for(int i=0;i<n;i++)visited[i]=0; 
 dfs(0);
 printf("\n"); 
 for(int i=0;i<n;i++)visited[i]=0; 
 bfs(0); 
 return 0; 
} 
Output: 
0 1 1 0 
1 0 1 1 
1 1 0 0 
0 1 0 0 
0 1 2 3 
0 1 2 3 
Result: Thus, a program that performs BFS and DFS traversal on a graph is written and executed successfully
