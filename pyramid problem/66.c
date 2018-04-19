#include<stdio.h>

int main()
{
       char i,j,k,l,m,n;
       
       printf("n=");
       scanf("%c",&n);
       
       for(i=n;i>='A';i--) {
              for(j='A';j<=i;j++)
                     printf("%c",j);
              for(k=j;k<=n;k++)
                     printf(" ");
              
              for(l=k-2;l>i;l--)
                     printf(" ");
              
              for(m=l;m>='A';m--)
                     printf("%c",m);
              
              printf("\n");
              }
              
           for(i='B';i<=n;i++) {
              for(j='A';j<=i;j++)
                     printf("%c",j);
              for(k=j;k<=n;k++)
                     printf(" ");
              
              for(l=k-2;l>i;l--)
                     printf(" ");
              
              for(m=l;m>='A';m--)
                     printf("%c",m);
              
              printf("\n");
              }
       return 0;
}