#include<stdio.h>
int main()
{
           int f[20],a[20][20],top=-1,front=0,i,j,n,u,v,w,reach[20];
           printf("Enter the no. of vertices\n");
           scanf("%d",&n);
           for(i=1;i<=n;i++)
              {
                      for(j=1;j<=n;j++)
                         {
                                  reach[j]=0;
                                  a[i][j]=0;
                          }
             }
       printf("Enter the adjacency matrix\n");
       for(i=1;i<=n;i++)
           {
                for(j=1;j<=n;j++)
                   {
                          scanf("%d",&a[i][j]);
                   }
           }
      printf("Enter the source vertices:\n");
      scanf("%d",&v);
     reach[v]=1;
      f[++top]=v;
      while(top>=front)
       {
               w=f[front++];
               for(u=1;u<=n;u++)
                   {
                           if((a[w][u]>0)&&(!reach[u]))
                            {
                                     printf("%d",w);
                                     printf("=>");
                                     printf("%d\t",u);
                                     f[++top]=u;
                                     reach[u]=1;
                           }
                  }
    }
    printf("\n all the vertices reachable from %d are:\n",v);
    for(i=1;i<=n;i++)
       {
                 if((reach[i])&&(i!=v))
                 printf("%d\n",i);
       }
  return 0;
}

