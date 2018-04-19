#include<stdio.h>
#include<math.h>
int main()
{   double x,y;
    int count;
    count =1;
    printf("\nEnter five real number in a line:");
    read:
    scanf("%lf",&x);
    printf("\n");
    if(x<0)
        printf("value %d is negative\n",count);
    else
        {
            y=sqrt(x);
            printf("%lf\t   %lf\n",x,y);

        }
    count++;
    if(count<=5)
        goto read;
    printf("\nEnd of computation..........");

    return 0;
}
