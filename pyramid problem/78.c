#include<stdio.h>

int main()
{
       int i,j,n;
       printf("n=");
       scanf("%d",&n);
       
       for(i=1;i<=n;i++)
       {
              for(j=0;j<=n+1;j++)
                     if((i==1)||(i==n)||(j==0)||(j==n+1))
                     {
                            if((i%2)&& j==0 ||(i%2)&& (j==n+1))
                                   printf(" ");
                            else
                                   printf("*");
                     }
                     else
                            printf(" ");
              
              printf("\n");       
              
       }
       
       return 0;
}