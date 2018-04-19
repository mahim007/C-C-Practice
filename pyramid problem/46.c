#include<stdio.h>

int main()
{
       int i,j,k,n;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=n;i>=1;i--) {
              for(j=1;j<=i;j++)
                     printf("%d",j);
              
              for(k=i;k>=1;k--)
                     printf("%d",k);
              
              printf("\n");
       }
       
       return 0;
}