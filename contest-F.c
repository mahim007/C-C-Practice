#include<stdio.h>
#include<math.h>

int main()
{   unsigned long long int x;
       long long int result;
       
       while(scanf("%lld",&x)==1) 
       {
              result=sqrt(x);
              printf("%lld\n",result);
       }
       return 0;
}