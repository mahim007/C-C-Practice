#include<stdio.h>

int main()
{
       char i,j,k,l;
       
     
       for(i='D';i>='A';i--) {
              for(j='D';j>=i;j--)
                     printf(" ");
              
              for(k='A';k<=i;k++)
                     printf("%c",k);
              
              for(l=k-2;l>='A';l--)
                     printf("%c",l);
              printf("\n");
       }
       
       
       return 0;
}