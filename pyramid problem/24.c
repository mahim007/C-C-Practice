#include<stdio.h>

int main()
{
       char i,j,k,l,m;
       
       for(i='A',m=0;i<='E';i++,m++) {
              for(j='A';j<i;j++)
                     printf(" \t");
              
              for(k='A';k<='E'-m;k++)
                     printf("\t%c",k);
              
              for(l=k-2;l>='A';l--)
                     printf("\t%c",l);
              
              printf("\n");
       }
       
       return 0;
}