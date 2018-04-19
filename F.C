#include<stdio.h>
#include<conio.h>
int main()
{
float x;
clrscr();
printf("Enter value of x: ");
scanf("%f",&x);
printf("So, f = %f ",(x*x*x-2*x*x+x-6.3)/(x*x+.05*x+3.14));

getch();
return 0;
}