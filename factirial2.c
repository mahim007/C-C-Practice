#include<stdio.h>
long int fact(long int);
int main()
{   long int y,x;
    printf("type a value for factorial:");
    scanf("%ld",&x);
    y=fact(x);
    printf("\nThe factorial of %ld is %ld",x,y);
    getch();
    return 0;
}

long int fact(long int a)
{   if(a<=1)
        return 1;
    else
        return (a*fact(a-1));


}
