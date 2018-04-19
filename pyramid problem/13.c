#include<stdio.h>

int main()
{
       int i,j,k,n;
       
       printf("n=");
       scanf("%d",&n);
       
       int array[100];
       
       for(i=1,k=n;i<=n;i++,k--)
              array[k]=i;
       for(i=1;i<=n;i++) {
              for(j=i;j<=n;j++)
                     printf("%d",array[j]);
              printf("\n");
       }
       return 0;
}