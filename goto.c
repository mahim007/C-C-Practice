#include<stdio.h>
#include<math.h>
int main()
{   double x,y;
    int count=1;
    printf("Enter real number in a line:");
    read:
        scanf("%lf",&x);
        printf("\n");
        if(x<0)
            printf("%d no value is negative",count);
        else
            {y=sqrt(x);
            printf("x=%lf and y=%lf\n",x,y);


            }
        count=count+1;
        if(count<=5)
            goto read;
      printf("\nEnd of computation.");
return 0;
}
