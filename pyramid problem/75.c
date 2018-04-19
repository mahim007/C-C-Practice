#include<stdio.h>

int main()
{
       int i,j,k,n;
       char p,l;
       
       printf("n=");
       scanf("%d",&n);
       
       for(i=1,p='a';i<=n;i++,p++)
       {
              for(j=i;j>=1;j--)
                     printf("%d",j);
              
              for(k=i;k<=n+1;k++)
                     printf(" ");
              
              for(l=p;l>='a';l--)
                     printf("%c",l);
              
              printf("\n");
       }
       
       return 0;
}