#include<stdio.h>
#include<conio.h>

int main()
{
    long int result=0;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2) {
        result=result+i*i;
    }
    printf("\nresult=%ld",result);
    
    return 0;
}