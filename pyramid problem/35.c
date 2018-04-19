#include<stdio.h>

int main()
{
       int i,j,k,l,n;
       printf("n=");
       scanf("%d",&n);
       
       
       for(i=1;i<=n;i++) {
              for(j=i;j<n;j++) 
                     printf(" ");
              
              for(k=i;k>=1;k--)
                     printf("%d",k);
              
              for(l=k+2;l<=i;l++)
                     printf("%d",l);
              
              printf("\n");
       }
       for(i=n-1;i>=1;i--) {
              for(j=n-1;j>=i;j--)
                     printf(" ");
              for(k=i;k>=1;k--)
                     printf("%d",k);
              
              for(l=k+2;l<=i;l++)
                     printf("%d",l);
              
              printf("\n");
       }
       
       return 0;
}