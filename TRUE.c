#include<stdio.h>
#include<conio.h>

int reverse(int);


int main()
{
    int num;
    printf("Type a number for num=\n");
    scanf("%d",&num);


    while(num){
    num=reverse(num);
    num=num/10;
     if(num>0){

    num=reverse(num);
   // if(num>0)
    printf("%d\n",num);
     }
    }

    return 0;
}


int reverse(int num)
{
    int rev=0,mod=0;
    while(num>0){
    mod=num%10;
    rev=rev*10+mod;
    num=num/10;
    }
    return (rev);

}
