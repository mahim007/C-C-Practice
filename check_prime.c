#include<stdio.h>
#include<math.h>
int prime(int n);
int main()
{
    int m,n;
    printf("\nType a number for n:");
    scanf("%d",&n);

    if(n==0)
        return 0;

    if(1==prime(n))
        printf("\n%d is a prime number.",n);
    else
        printf("\n%d is not a prime number.",n);

    return 0;
}

int prime(int n)
{
    int i,root;
    if((n%2)==0)
        return 0;

    root=sqrt(n);

    for(i=3;i<=root;i=i+2){
    if((n%i)==0)
        return 0;
    }
    return 1;
}
