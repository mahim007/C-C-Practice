#include<stdio.h>

int main()
{
    int i,j,r,t;
    long long int n,a;
    scanf("%d",&t);
    for(r=1;r<=t;r++)
    {
    scanf("%lld %lld",&a ,&n);
    for(i=a;i<=n;i++)
    { if(i==1)
       continue;
        for(j=2;j<i;j++)
        {   if(i==2||i==3)
            {
                printf("%d\n",i);
                break;
            }
            if(i%j==0)
                break;
            else if(i==j+1)
                printf("%d \n",i);
        }
    }
    puts("\n");
    }
    return 0;
}
