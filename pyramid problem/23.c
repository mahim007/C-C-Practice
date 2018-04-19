#include<stdio.h>

int main()
{
       int i,j,k,l,n;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=65;i<=65+n;i++) {
              for(j=i;j<=65+n;j++)
                     printf(" \t");
              
              for(k=65;k<=i;k++)
                     printf("%c\t",k);
              
              for(l=k-2;l>=65;l--)
                     printf("%c\t",l);
              
              printf("\n");
       }
       
       return 0;
}