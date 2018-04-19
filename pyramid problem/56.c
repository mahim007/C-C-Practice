#include<stdio.h>

int main()
{
       int i,j,k,l,m,n;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=n;i>=1;i--) {
              for(j=1;j<=i;j++)
                     printf("*");
              for(k=j;k<=n;k++)
                     printf(" ");
              for(l=k-1;l>=j;l--)
                     printf(" ");
              for(m=l;m>=1;m--)
                     printf("*");
              
              printf("\n");
       }
       
       return 0;
}