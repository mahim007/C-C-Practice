#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    long int a,b,sum;
	//clrscr();
    while(scanf("%ld%ld",&a,&b)==2)
    {
        if(a==0&&b==0)
        break;
    sum=a+b;
    printf("%ld\n",sum);
    }
//getch();
return 0;
}