#include<stdio.h>

int main()
{
       int i,j,k=1,n;
       printf("n=");
       scanf("%d",&n);
       
              for(i=1;k<=n;i++)
              {      printf("\t");
                     if(i%2)
                     {
                            for(j=1;j<=1;j++)
                                   printf("%d",k++);
                     }
                     else
                     {
                            for(j=1;j<=2;j++)
                                   printf("%d",k++);
                     }
                     printf("\n");
              }
   
       
       return 0;
}