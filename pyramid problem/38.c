#include<stdio.h>

int main()
{
       char i,j,k,l;
       
       for(i='A';i<='D';i++) {
              for(j=i;j<'D';j++)
                     printf(" ");
              for(k='A';k<=i;k++)
                     printf("%c",k);
              for(l=k-2;l>='A';l--)
                     printf("%c",l);
              printf("\n");
       }
       return 0;
}