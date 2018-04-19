#include<stdio.h>

int main()
{
       int array[100],i,j,k,n;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=1,j=n;i<=n;i++,j--)
              array[j]=i;
       
       for(i=n;i>=1;i--) {
              for(k=i;k<=n;k++)
                     printf("%d",array[k]);
              printf("\n");
       }
       
       return 0;
}