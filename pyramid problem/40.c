#include<stdio.h>

int main()
{
       char i,j,k;
       
       
       for(i='A';i<='E';i++) {
              for(j=i;j<'E';j++)
                     printf(" ");
              
              for(k='A';k<=i;k++)
                     printf("%c",k);
              
              printf("\n");
       }
       
       for(i='D';i>='A';i--) {
              for(j='D';j>=i;j--)
                     printf(" ");
              for(k='A';k<=i;k++)
                     printf("%c",k);
              
              printf("\n");
       }
       
       return 0;
}