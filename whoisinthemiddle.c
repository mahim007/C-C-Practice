#include<stdio.h>

int main()
{
        long long int low,high,mid,i,j,cow[10000],n,temp;
        
        while(scanf("%lld",&n)==1)
        {
                low=0;
                high=n-1;
                mid=(low+high)/2;
                for(i=0;i<n;i++)
                        scanf("%lld",&cow[i]);
                
                for(i=1;i<=n;i++)
                {
                        for(j=0;j<n-i;j++)
                        {
                                if(cow[j]>cow[j+1]){
                                temp=cow[j+1];
                                cow[j+1]=cow[j];
                                cow[j]=temp;
                                }
                        }
                }
                printf("%lld\n",cow[mid]);
        }
        
        return 0;
}