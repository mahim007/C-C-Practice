#include<stdio.h>
#include<conio.h>

int main()
{
       int i,j,n,k,l;
       printf("\nHow many lines(odd)?:\t");
       scanf("%d",&n);
       
       for(i=0;i<n/2+1;i++) {
              for(j=n/2;j>i;j--)
                     printf(" ");
              for(k=1;k<=2*i+1;k++)
                     printf("*");
       printf("\n");
       }
       l=i;
       for(i=n-l-1;i>=0;i--) {
              for(j=n-l;j>i;j--)
                     printf(" ");
              for(k=0;k<2*i+1;k++)
                     printf("*");
       printf("\n");
       }
       return 0;
}