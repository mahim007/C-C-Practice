#include<stdio.h>

int main()

{
   long int t,i,a,b,c,d;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%ld%ld%ld",&a,&b,&c);

        d=a+b-c;
        printf("Case %ld: %ld\n",i,d);

    }

    return 0;
}
