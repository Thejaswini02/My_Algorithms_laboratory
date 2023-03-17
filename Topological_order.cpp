#include<stdio.h>
#define max 25
int main()
       {
                    int n,e,i,j,v,u,top=0,stack[max],a[max][max],indeq[max],k[max];
                    
                    printf("enter the no. of vettices:\n");
                    scanf("%d",&n);
                    for(i=1;i<=n;i++)
                    {
                                for(j=1;j<=n;j++)
                                a[i][j]=0;
                                indeq[i]=0;
                               stack[i]=0;
                              k[i]=0;
                  }
                printf("Enter the no. of edges:\n");
                scanf("%d",&e);
                for(i=1;i<=e;i++)
                    {
                             printf("Enter the end vertices of edges:\n");
                             scanf("%d%d",&u,&v);
                            a[u][v]=1;
                           indeq[v]++;
                      }
          printf("the adjacency matrix is:\n");
         for(i=1;i<=n;i++)
               {
                          for(j=1;j<=n;j++)
                          printf("%d",a[i][j]);
                         printf("\n");
                 }
      for(i=1;i<=n;i++)
      if(indeq[i]==0)
      stack[++top]=i;
       i=0;
     while(top>0)
           {
                       k[++i]=u=stack[top--];
                       for(j=1;j<=n;j++)
                        {
                                         if(a[u][j]==1)
                                           {
                                                 indeq[j]--;
                                                 if(!indeq[j])
                                                stack[++top]=j;
                                          }
                        }
            }
            if(i==n)
               {
                          printf("Topological sequence is:\n");
                          for(j=1;j<=n;j++)
                          printf("<%d>\n",k[j]);
                }
          else
                        printf("\n The sequence does not exist\n");
    return 0;
}
