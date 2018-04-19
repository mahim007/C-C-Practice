#include<stdio.h>

int main()
{
       char i,j,k,n;
       
       printf("n=");
       scanf("%c",&n);
       
       for(i='A';i<=n;i++) {
                     k=i;
              for(j='A';j<=n;j++,k++) {
                     printf("%c",k);
                     if(k==n)
                            k='A'-1;
              }
                     printf("\n");
       }
       
       return 0;
}