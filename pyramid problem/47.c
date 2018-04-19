#include<stdio.h>

int main()
{
       char i,j,k,n;
       
       for(i='E';i>='A';i--) {
              for(j='A';j<=i;j++)
                     printf("%c",j);
              
              for(k=i;k>='A';k--)
                     printf("%c",k);
              
              printf("\n");
       }
       
       return 0;
}