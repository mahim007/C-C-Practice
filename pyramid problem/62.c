#include<stdio.h>

int main()
{
       int i,j,n;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=1;i<=n;i++) {
              for(j=i;j>=1;j--) {
                     if(j%2)
                            printf("A");
                     else
                            printf("B");
              }
              printf("\n");
       }
       
       
       return 0;
}