#include<stdio.h>
void warshall(int p[10][10],int n)
{
            int i,j,k;
           for(k=1;k<=n;k++)
               {
                           for(i=1;i<=n;i++)
                             {
                                     if(p[i][k]==1)
                                         {
                                                for(j=1;j<=n;j++)
                                                  {
                                                            p[i][j]=(p[i][j]||(p[i][k]&&p[k][j]));
                                                  }
                                       }
                             }
                }
}
int main()
{
       int i,j,n,p[10][10];
      printf("Enter the number of nodes:\n");
      scanf("%d",&n);
      printf("Enter the adjacency matrix:\n");
      for(i=1;i<=n;i++)
      for(j=1;j<=n;j++)
             scanf("%d",&p[i][j]);
             warshall(p,n);
             printf("\n  path matrix is:\n");
     for(i=1;i<=n;i++)
            {
                     for(j=1;j<=n;j++)
                      {
                               printf("%d\t",p[i][j]);
                      }
                   printf("\n");
          }
   return 0;
}

