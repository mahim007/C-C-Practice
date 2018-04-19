#include<stdio.h>

int main()
{
       long long int sum,n;
       int t,i,j;
       
       scanf("%d",&t);
       for(i=1;i<=t;i++)
       {      sum=0;
              j=1;
              scanf("%lld",&n);
              while(sum<=n)
              {      
                     sum=sum+j;
                     if(sum==n) {
                            printf("Yes\n");
                            break;
                     }
                     j++;
              }
              if(sum>n)
                     printf("No\n");
       }
       
       
       return 0;
}