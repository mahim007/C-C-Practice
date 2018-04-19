#include<stdio.h>

int main()
{
        long long int num,count,a,b,result;
        
        while(scanf("%lld %lld",&a,&b)==2)
        {
                count=0;
                result=a+b;
                while(result)
                {
                        result=result/10;
                        count++;
                }
                printf("%lld\n",count);
        }
        
        return 0;
}