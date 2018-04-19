#include<stdio.h>

int main()
{
       int i,j,n;
       char k,l;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=1,l='A';i<=n;i++,l++)  {
              if(i%2)
                     for(j=1;j<=i;j++)
                            printf("%d",j);
              if((i%2)==0)
                     for(k='A';k<=l;k++)
                            printf("%c",k);
              
              printf("\n");
       }
       
       return 0;
}