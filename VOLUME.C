#include<stdio.h>
//#include<conio.h>
int main()
{  long int num,div=0;
    printf("num=");
    scanf("%ld",&num);

    while(num){
    num=num/10;

    div++;
    }
    printf("%ld",div);
    return 0;

}
