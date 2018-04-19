#include<stdio.h>

int main()
{
       int i,j,k,l,n;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=1;i<=n;i++) {
              for(j=1;j<=n-i;j++)
                     printf(" \t");
              
              for(k=1;k<=i;k++)
                     printf("\t*",k);
              
              for(l=k-2;l>=1;l--)
                     printf("\t*",l);
              
              printf("\n");
       }
       
       return 0;
}