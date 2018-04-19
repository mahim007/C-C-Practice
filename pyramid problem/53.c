#include<stdio.h>

int main()
{
       int i,j,n;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=1;i<=n;i++) {
              for(j=1;j<=n;j++)
                     if((i==1)||(i==n)||(j==1)||(j==n))
                            printf("3 ");
                     else if((i==(n/2)+1) && j==i)
                            printf("1 ");
                     else
                            printf("2 ");
                     
                     printf("\n");
       }
       
       return 0;
}