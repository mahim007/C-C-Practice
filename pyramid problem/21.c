#include<stdio.h>

int main()
{
       int i,j,k,l,n;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=1;i<=n;i++) {
              for(j=n-1;j>=i;j--)
                     printf(" ");
              
              l=1;
              for(k=1;k<=i;k++) {
                     printf("%d ",l);
                     l=l*(i-k)/k;
              }
              puts("");
       }
       
       return 0;
}