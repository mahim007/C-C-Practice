#include<stdio.h>

int main()
{
       int i,j;
       
       for(i=1;i<=3;i++)
       {
              for(j=1;j<=4;j++)
              {
                     if((i==1)&&(j>1))
                            printf("3");
                     else if(i==2)
                            printf("2");
                     else if((i==3)&&(j<4))
                            printf("3");
                     else
                            printf("1");
              }
              
              printf("\n");
       }
       
       return 0;
}