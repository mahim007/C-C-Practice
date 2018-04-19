#include<stdio.h>
#include<conio.h>
int main()
{
float n;
//clrscr();
printf("Enter your mark: ");
scanf("%f",&n);
if(n>=0 && n<=100)
{
if(n>=80)
printf("\nYou got A grade. \n\nGrade Point is 5.00");
else if(n>=70)
printf("\nYou got B grade. \n\nGrade Point is 4.00");
else if(n>=60)
printf("\nYou got C grade. \n\nGrade Point is 3.00");
else if(n>=45)
printf("\nYou got D grade. \n\nGrade Point is 2.00");
else
printf("\nYou got F grade. \n\nGrade Point is 0.00");


}
else
printf("\nIts an invalid mark!");
getch();
return 0;

}