#include<stdio.h>

int main()
{
       int i,j=0,n,k=0;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=0;i<n;i++) {
                     k=i+j;
              for(j=0;j<=k;j++)
                     printf("*");
              
              printf("\n");
       }
       
       return 0;
}