#include<stdio.h>
#include<conio.h>
int main()
{   int i,num,is_prime;

    printf("\nEnter your number:");
    scanf("%d",&num);
    is_prime=1;
    for(i=2;i<num/2;i++)
        if((num%i)==0)
            is_prime=0;

    if(is_prime==1)
        printf("\n%d is a prime number.",num);
    else
        printf("\n%d is not a prime number.",num);


    return 0;

}
