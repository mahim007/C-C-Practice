#include<stdio.h>

int main()
{
       int i,j,k,l,m,n;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=n;i>=1;i--) {
              for(j=1;j<=i;j++)
                     printf("%d",j);
              for(k=j;k<=n;k++)
                     printf(" ");
              
              for(l=k-2;l>i;l--)
                     printf(" ");
              
              for(m=l;m>=1;m--)
                     printf("%d",m);
              
              printf("\n");
              }
              
           for(i=2;i<=n;i++) {
              for(j=1;j<=i;j++)
                     printf("%d",j);
              for(k=j;k<=n;k++)
                     printf(" ");
              
              for(l=k-2;l>i;l--)
                     printf(" ");
              
              for(m=l;m>=1;m--)
                     printf("%d",m);
              
              printf("\n");
              }
       return 0;
}