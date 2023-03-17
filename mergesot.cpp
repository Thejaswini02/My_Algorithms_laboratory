#include<stdio.h>
int a[20];
void mergesort(int a[],int,int);
void merge(int a[],int,int,int);
      int main() 
              {
                         int i,n;
                         
                         printf("Enter the number of elements\n");
                         scanf("%d",&n);
                         printf("Enter the array elements\n");
                         for(i=0;i<n;i++)
                          {
                                      scanf("%d",&a[i]);
                          }
                         mergesort(a,0,n-1);
                         printf("\nafter sorting\n");
                          for(i=0;i<n;i++)
                      {
                           printf("%d\t",a[i]);
                }
      
     return 0;
}
 void mergesort(int a[],int low,int high)
      {
                   int mid;
                  if(low<high)
                  {
                                mid=(low+high)/2;
                                mergesort(a,low,mid);
                                mergesort(a,mid+1,high);
                                merge(a,low,mid,high);
                 }
    }
 void merge(int a[],int low,int mid,int high)
 {
         int b[20];
         int h=low,i=low,j=mid+1,k;
        while(h<=mid&&j<=high)
                    {
                              if(a[h]<=a[j])
                                               b[i++]=a[h++];
                             else
                                        b[i++]=a[j++];
                    }
     for(k=j;k<=high;k++)
             {
                      b[i++]=a[k];
             }
     for(k=h;k<=mid;k++)
            {
                     b[i++]=a[k];
            }
     for(i=low;i<=high;i++)
           {
                     a[i]=b[i];
           }
}

