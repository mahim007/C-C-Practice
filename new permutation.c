#include<stdio.h>
int main()
{
    int a,b,c,x;
    printf("a=");
    scanf("%d",&a);
    printf("\nb=");
    scanf("%d",&b);



    if(a<b)
        x=a;
    else
        x=b;

    while((a%x)!=0 || (b%x)!=0)
    {
        x--;
    }

    printf("\nThe gcd is %d",x);

    return 0;



}
