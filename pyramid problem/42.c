#include<stdio.h>

int main()
{
       char i,j,k;
       
    
       
       for(i='E';i>='A';i--) {
              for(j=i;j>='A';j--)
                     printf("%c",j);
              
              printf("\n");
       }
       
       return 0;
}