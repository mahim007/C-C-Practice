#include<stdio.h>

int main()
{
       int n;
       char i,j;
       printf("n=");
       scanf("%d",&n);
       
       for(i=65;i<=65+n;i++) {
              for(j=65;j<=i;j++)
                     printf("%c",i);
              
              printf("\n");
       }
      
       return 0;
       
}