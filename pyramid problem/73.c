#include<stdio.h>

int main()
{
       int i,j,n,k=1;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=0;i<n;i++,k++)
       {
              for(j=1;j<=i+k;j++)
                     printf("%d",j);
              
              printf("\n");
       }
       return 0;
}