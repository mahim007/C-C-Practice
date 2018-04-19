#include<stdio.h>

int main()
{
       int i,j,k=1,l,n;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=1;i<=n;i++) {
                      
              for(j=1;j<=i;j++)
                     printf("%d",j);
              for(l=j-2;l>=1;l--)
                     printf("%d",l);
              
              printf("\n");
             
       }
       
       return 0;
}