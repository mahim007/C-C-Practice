#include<stdio.h>
#include<conio.h>
int main()
{
float x,y;
clrscr();
printf("Enter value of x..... ");
scanf("%f",&x);
clrscr();
printf("Now, enter value of y..... ");
scanf("%f",&y);
clrscr();
printf("So, \n x + y = %f + %f = %f ",x,y,x+y);
printf("\n x - y = %f - %f = %f ",x,y,x-y);
printf("\n x * y = %f * %f = %f ",x,y,x*y);
printf("\n x / y = %f / %f = %f ",x,y,x/y);


getch();
return 0;
}