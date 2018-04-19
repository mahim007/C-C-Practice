#include<stdio.h>
int main()
{
    long long int i,j,L,H,D=0,P,countt,k,value;
    scanf("%lld",&value);
    for(k=1; k<=value; k++)
    {
        scanf("%lld %lld",&L,&H);
        for(i=H; i>=L; i--)
        {
            countt=0;
            for(j=1; j<=i; j++)
            {
                if(i%j==0)
                    countt=countt+1;
            }
            if(D<=countt)
            {
                D=countt;
                P=i;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",L,H,P,D);
    }
    return 0;
}
