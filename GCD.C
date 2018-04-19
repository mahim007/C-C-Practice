#include<stdio.h>
#include<conio.h>
int main()
{
int a, b, temp;
//clrscr();
printf("Enter the value of a : ");
scanf("%d",&a);
printf("Enter the value of b : ");
scanf("%d",&b);

while(a!=0)
{
temp=a;
a=b%a;
b=temp;
}
printf("GCD = %d ",b);

getch();
return 0;
}
