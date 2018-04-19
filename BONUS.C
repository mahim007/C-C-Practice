#include<stdio.h>
#include<conio.h>
int main()

{

int a,s;
clrscr();
printf("Enter the worker's age: ");
scanf("%d",&a);
printf("Enter the worker's salary: ");
scanf("%d",&s);
if(a>=45 && s>=10000)
printf("Give the worker a bonus.");
else
printf("Do not give the worker any bonus.");
getch();
return 0;

}