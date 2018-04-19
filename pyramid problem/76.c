#include<stdio.h>

int main()
{
       int i,j,k=1,n;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=1;i<=n;i++)
       {
              for(j=1;j<=i;j++,k++)
              {
                     if(k%2)
                            printf("1");
                     else 
                            printf("0");
              }
              
              printf("\n");
       }
       
       return 0;
}