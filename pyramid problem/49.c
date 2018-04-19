#include<stdio.h>

int main()
{
       int i,j,k,n;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=n;i>=1;i--) {
              for(j=i;j<=n;j++)
                     printf("%d",j);
              for(k=j-2;k>=i;k--)
                     printf("%d",k);
              
              printf("\n");
       }
       
       return 0;
}