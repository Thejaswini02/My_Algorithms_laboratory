#include<stdio.h>
int a[10][10],n,visit[10];
void dfs(int);
          int main()
             {
                         int i,j,v,count;
                      
                      printf("enter the number of vertices:\n");
                      scanf("%d",&n);
                      printf("Enter the graph matrix:\n");
                      for(i=1;i<=n;i++)
                      for(j=1;j<=n;j++)
                      scanf("%d",&a[i][j]);
                      visit[i]=0;
                     printf("Enter the starting vertix:\n");
                     scanf("%d",&v);
                     dfs(v);
                     for(i=1;i<=n;i++)
                       {
                                    if(visit[i])
                                          count=1;
                                  else
                                    {
                                        count=0;
                                       break;
                                  }
                    }
                  if(count)
                               printf("graph is connected\n");
                else
                              printf("graph is not connected\n");
       
       return 0;
}
void dfs(int v)
{
           int i;
          visit[v]=v;
          for(i=1;i<=n;i++)
          if(a[v][i]&&!visit[i])
           {
                            printf("%d->%d\t",v,i);
                            dfs(i);
         }
} 

