#include<stdio.h>
#include<string.h>
char str[100],ptr[100];
int res,m,n,len,i,j,k,table[1000];
     void shift(char p[])
          {
                    len=strlen(p);
                    for(i=1;i<1000;i++)
                                table[i]=len;
                    for(j=0;j<=len-2;j++)
                               table[p[j]]=len-1-j;
           }
int horspool(char p[],char t[])
{
                shift(p);
                m=strlen(p);
                n=strlen(t);
                i=m-1;
               while(i<=n-1)
                 {
                           k=0;
                           while(k<=m-1&&(p[m-1-k]==t[i-k]))
                        k++;
                        if(k==m)
                                    return i-m+1;
                       else
                                   i=i+table[t[i]];
                 }
     return -1;
}
int main()
{
          
          printf("Enter the text:\n");
          gets(str);
          printf("Enter the pattern to be found:\n");
          gets(ptr);
         res=horspool(ptr,str);
          if(res==-1)
                      printf("The pattern is not found");
          else
                      printf("The pattern is found at postion %d",res+1);
      
      return 0;
}

