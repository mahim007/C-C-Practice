#include<stdio.h>

int main()
{
       int i,j,k,n;
       printf("n=");
       scanf("%d",&n);
       
       for(i=0;i<n;i++) {
              for(j=0;j<i;j++) {
                     printf(" \t");
              }
              for(k=1;k<=n-i;k++)
                     printf("%d\t",k);
              
       printf("\n");
       }
       return 0;
}