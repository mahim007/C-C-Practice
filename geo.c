#include<stdio.h>

int main()
{
       double  n;
       int t,i;
       double result;
       
       
       scanf("%d",&t);
       
       for(i=1;i<=t;i++)
       {
              scanf("%lf",&n);
              n=n*n;
              result=n/2;
              result=result*0.5;
              
              printf("Test %d: %.2lf\n",i,result);
       }
       
       return 0;
}