#include<stdio.h>
#include<conio.h>
int main()
{
float n;
clrscr();
printf("Enter your Grade Point: ");
scanf("%f",&n);
if(n>=0 && n<=5)
{
if(n==5)
printf("\nYou got A grade!");
else if(n>=4 && n<5)
printf("\nYou got B grade!");
else if(n>=3)
printf("\nYou got C grade!");
else if(n>=2)
printf("\nYou got D grade!");
else
printf("\nYou got F grade.");


}
else
printf("\nIts an invalid Grade!");
getch();
return 0;

}




