#include<stdio.h>
int main()
{   int num,mod;
    printf("num=");
    scanf("%d",&num);
    printf("\nThe reverse is=");


    while(num)
    {
        mod=num%10;
        printf("%d",mod);
        num=num/10;

    }
   // printf("%d",mod);

    return 0;
}
