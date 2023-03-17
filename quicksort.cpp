#include<stdio.h>
int partition(int a[],int lb,int vb)
{
                    int i,j,pivot,temp;
                    j=vb;
                    i=lb;
                   pivot=a[lb];
                  while(i<j)
                   {
                            while((a[i]<=pivot)&&(i<j))
                                {
                                             i++;
                               }
                          while(a[j]>pivot)
                            {
                                          j--;
                            }
                        if(i<j)
                             { 
                                      temp=a[i];
                                      a[i]=a[j];
                                     a[j]=temp;
                         }
             }
     a[lb]=a[j];
     a[j]=pivot;
     return j;
}
void quicksort(int a[],int lb,int vb)
{
            int pos;
            if(lb<vb)
                 {
                            pos=partition(a,lb,vb);
                           quicksort(a,lb,pos-1);
                           quicksort(a,pos+1,vb);
               }
}
int main()
{
                      int a[10],n,i,j;
                     
                     printf("Enter the value of n\n");
                     scanf("%d",&n);
                    printf("Enter the elements\n");
                    for(i=0;i<n;i++)
                   scanf("%d",&a[i]);
                  quicksort(a,0,n-1);
                 printf("Sorted array is\n");
                 for(i=0;i<n;i++)
                printf("%d\t",a[i]);
                
                return 0;
}

