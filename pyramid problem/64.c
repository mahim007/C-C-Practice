#include<stdio.h>

int main()
{
       int i,j,k=1,l,n;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=1;i<=n;i++) {
                      k=i;
              for(j=1;j<=i;j++,k++)
                     printf("%d",k);
              for(l=k-2;l>=i;l--)
                     printf("%d",l);
              
              printf("\n");
             
       }
       
       return 0;
}