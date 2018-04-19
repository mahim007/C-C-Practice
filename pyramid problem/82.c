#include<stdio.h>

int main()
{
      int i,j,k,l,m,n;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=1;i<=n;i++)
       {
              for(j=1;j<=i;j++)
                     printf("*");
              printf(" ");
              
              for(k=n;k>=i;k--)
                     printf("*");
              printf(" ");
              
              for(l=n;l>=i;l--)
                     printf("*");
              printf(" ");
              
              for(m=1;m<=i;m++)
                     printf("*");
              
              
              printf("\n");
       }
       
       return 0;
}