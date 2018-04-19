#include<stdio.h>

int main()
{
       int i,j,n;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=1;i<=n;i++)
       {
              for(j=1;j<=i;j++)
              {
                    if(i%2)
                    {
                           if(j%2)
                                   printf("%d",j);
                           else
                                   printf("*");
                    }
                    else
                    {
                          if(j%2)
                            printf("*");
                          else
                                   printf("%d",j);
                     }
              }
              printf("\n");
       }
       
       return 0;
}