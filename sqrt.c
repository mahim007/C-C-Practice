#include<stdio.h>
#include<math.h>
int main()
{   double x,y;
    read:
    scanf("%lf",&x);
    if(x<0)
        goto read;
    y=sqrt(x);
    printf("x=%lf and y=%lf",x,y);

    return 0;
}
