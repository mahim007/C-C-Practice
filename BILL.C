#include<stdio.h>
#include<conio.h>
int main()
{
float x;

clrscr();
printf("Enter Unit: ");
scanf("%f",&x);

if(x<=200)
printf("Bill: %f",x*.5);

else if(x<=500)
printf("Bill: %f",x*.65+100);

else if(x<=700)
printf("Bill: %f",x*.8+250);

else if(x>700)
printf("Bill: %f",x+390);

getch();
return 0;
}