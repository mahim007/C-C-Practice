#include<stdio.h>

int main()
{
       int i,j,k=0,n;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=0;i<5;i++) {
              for(j=0;j<=i;j++,k++) {
                     if(i==0)
                     {
                            printf("%d ",n);
                            k=-1;
                     }
                     else if(k==n)
                     {
                            printf("%d ",n);
                            k=-1;
                     }
                     else
                            printf("%d ",k);
              }
              printf("\n");
       }
       
       return 0;
}