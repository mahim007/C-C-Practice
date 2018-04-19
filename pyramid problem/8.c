#include<stdio.h>

int main()
{
       int i,j,n;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=n;i>=1;i--) {
              for(j=1;j<=n;j++)
                     printf("%d",i);
              printf("\n");
       }
       return 0;
}