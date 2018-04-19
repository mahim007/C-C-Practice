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
              for(k=n;k>i;k--)
                     printf("#\t");
              
       printf("\n");
       }
       return 0;
}