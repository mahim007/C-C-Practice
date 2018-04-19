#include<stdio.h>
#define accuracy 0.0001
int main()
{
    int n,count;
    float x,term,sum;
    printf("Enter value of x:");
    scanf("%f",&x);
    n=count=term=sum=1;
    while(n<=10)
        {term=term*x/n;
         sum=sum+term;
         count=count+1;
            if(term<accuracy)
                n=999;
            else
                n=n+1;


        }

    printf("term=%f\n sum=%f\n count=%d",term,sum,count);
    return 0;
}
