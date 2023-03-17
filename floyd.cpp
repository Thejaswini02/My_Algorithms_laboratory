#include<stdio.h>
int b[10][10],n,i,j,k;
void floyd()
{
              for(k=1;k<=n;k++)
                      {
                                 for(i=1;i<=n;i++)
                                 for(j=1;j<=n;j++)
                                {
                                        if(b[i][k]+b[k][j]<b[i][j])
                                               {
                                                      b[i][j]=b[i][k]+b[k][j];
                                               }
                              }
                }
}
int main()
{
              printf("Enter the number of nodes:\n");
              scanf("%d",&n);
              printf("Enter the adjacency matrix:\n");
               for(i=1;i<=n;i++)
               for(j=1;j<=n;j++)
              scanf("%d",&b[i][j]);
             floyd();
                   printf("\n all pair shortest path is:\n");
                  for(i=1;i<=n;i++)
                  {
                             for(j=1;j<=n;j++)
                            {
                                             printf("%d\t",b[i][j]);
                            }
                           printf("\n");
                }
     return 0;
}

