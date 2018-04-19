#include<stdio.h>
#include<math.h>
int main()
{   float x,y;
    read:
    scanf("%f",&x);
    if(x<0)
        goto read;
    y=sqrt(x);
    printf("x=%f and y=%f",x,y);

    return 0;




}
