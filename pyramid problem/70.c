#include<stdio.h>

int main()
{
       int i,j,k,n;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=1;i<=n;i++) {
              if(i%2) {
                     k=1;
                     for(j=i;j<=n;j++,k++)
                            printf("%d",k);
              }
              else
              {
                     k=3;
                     for(j=i;j<=n;j++,k++){
                            printf("%d",k);
                     if(k==n)
                            k=0;}
              }
              
              printf("\n");
       }
       
       return 0;
}