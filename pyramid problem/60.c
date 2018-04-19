#include<stdio.h>

int main()
{
       int i,j,n,k,l=1;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=1;i<=n;i++) {
              for(j=i;j<n;j++) 
                     printf(" ");
              
              for(k=1;k<=i;k++,l++) 
                     printf("%d ",l);
                     
                     printf("\n");
       }
       
       return 0;
}