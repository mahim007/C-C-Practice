#include<stdio.h>
#include<conio.h>
int main()
{
       int ara[2][2];
       int i,j;
       for(i=0;i<=2;i++) {
              for(j=0;j<=2;j++)
              {
                     if(i==j)
                     ara[i][j]=1;
              else
                     ara[i][j]=0;
                     }
       }
       for(i=0;i<=2;i++){
              for(j=0;j<=2;j++)
                     printf("%d",ara[i][j]);
                     printf("\n");}
                     
       return 0;
}