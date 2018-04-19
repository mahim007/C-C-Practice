#include<stdio.h>

int main()
{
       int i,j,k=1,l=65,n;
       
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=1;i<=n;i++)
       {      if(i%2)
              {
              for(j=1;j<=i;j++)
                     printf("%d",k++);
              }
              else
              {
                     for(j=1;j<=i;j++)
                            printf("%c",l++);
              }
              
              printf("\n");
       }
       
       return 0;
}