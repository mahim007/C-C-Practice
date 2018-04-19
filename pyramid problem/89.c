#include<stdio.h>

int main()
{
       int i,j,k,l,n;
       
       printf("n=");
       scanf("%d",&n);
       k=n;
       printf("\n\n%d\n",n);
       for(i=1;k<=70;i=i*2)
       {
              l=i*2;
              k=n=n*2;
              if(k>70)
                     break;
              for(j=1;j<=l;j++)
                     printf("%d ",k++);
              
              printf("\n");
       }
       
       return 0;
}