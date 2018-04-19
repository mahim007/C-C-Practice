#include<stdio.h>

int main()
{
       int i,j,n;
       
       printf("n=");
       scanf("%d",&n);
       printf(" 1\n");
       for(i=2;i<=n;i++)
       {      printf(" ");
              for(j=1;j<=i;j++)
                     printf("%d",j);
              printf("1");
              
              printf("\n");
       }
       
       return 0;
}