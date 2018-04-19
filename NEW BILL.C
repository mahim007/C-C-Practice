#include<stdio.h>
#include<conio.h>
int main()
{
float x;

clrscr();
printf("Enter Unit: ");
scanf("%f",&x);

if(x<=250)
printf("Bill: 100");

else if(x>250)
printf("Bill: %f",x*.65-250*.65+100);





getch();
return 0;

}

