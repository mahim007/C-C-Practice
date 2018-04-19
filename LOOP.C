#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,a,sum,max,min;
float avg;
clrscr();
printf("Enter how many numbers: ");
scanf("%d",&n);
printf("\n");

sum=0;

for(i=1;i<=n;i++)
{
printf("\nEnter number: ");
scanf("%d",&a);

if(i==1)
{
max=a;
min=a;
}

sum=sum+a;

if(a>max)
max = a;

if(a<min)
min = a;
}

avg=(float)sum/n;
printf("\n\nThe sum of these %d numbers is: %d \nThe maximum of these %d numbers is: %d \nThe minimum of these %d numbers is: %d ",n,sum,n,max,n,min);
printf("\nAverage is: %f",avg);

getch();
return 0;
}