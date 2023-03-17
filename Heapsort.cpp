#include<stdio.h>
int b[20];
void heapsort(int x[],int n)
{
                 int i,s,f,lt;
                 for(i=1;i<n;i++)
                 {
                        lt=x[i];
                         s=i;
                         f=(s-1)/2;
                        while(s<0&&x[f]<lt)
                           {
                                       x[s]=x[f];
                                       s=f;
                                      f=(s-1)/2;
                        }
                   x[s]=lt;
            }
}
void heap(int y[],int n)
{
             int j=1,t;
            while(j<=n)
               {
                           t=y[n-j];
                           y[n-j]=y[0];
                          y[0]=t;
                          b[n-j]=y[n-j];
                   heapsort(y,n-j);
                   j++;
           }
}
int main()
{
             int a[20],n,i;
             printf("Enter the size of array:\n");
             scanf("%d",&n);
             printf("Enter the array elements:\n");
             for(i=0;i<n;i++)
             scanf("%d",&a[i]);
            printf("Sorted array is:\n");
            heapsort(a,n);
            heap(a,n);
           for(i=0;i<n;i++)
           printf("%d\t",b[i]);
           return 0;
}

