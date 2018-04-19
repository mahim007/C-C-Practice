#include<stdio.h>
int main()
{   long int num,div;
    printf("\nEnter your number:");
    scanf("%ld",&num);
    div=num/2;
    while((num%div)!=0 && div>1)
        {
            div--;
        }
    if(div==1)
        printf("\n%ld is a prime number.",num);
    else
        printf("\n%ld is not a prime number",num);

    return 0;
}
