#include<stdio.h>

int main()
{
       int i,j,k,n;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=1;i<=n;i++) {
                     k=i;
              for(j=1;j<=n;j++,k++) {
                     printf("%d",k);
                     if(k==n)
                            k=0;
              }
                     printf("\n");
       }
       
       return 0;
}