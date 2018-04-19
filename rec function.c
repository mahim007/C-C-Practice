#include<stdio.h>
long int rec(long int);
int main()
{   long int x;
    printf("Type a value for x:");
    scanf("%ld",&x);
    rec(x);
    getch();
    return 0;
}
long int rec(long int x)
{   if(x==0)
        return;
    printf("%d\n",x);
    rec(x-1);
    printf("\nCall end\n");
}
