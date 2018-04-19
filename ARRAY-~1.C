#include<stdio.h>
#include<conio.h>
int main(void)
{
int a[7],i,que,max,min,sum=0;
float avg;

//clrscr();

for(i=0;i<=6;i++)
{
printf("Enter mark no. %d : ",i+1);
scanf("%d",&a[i]);
printf("\n");

if(i==0)
{
max=a[i];
min=a[i];
}

sum=sum+a[i];

if(a[i]>max)
max = a[i];

if(a[i]<min)
min = a[i];

}

avg=(float)sum/7;
printf("\nTotal: %d \nMax: %d \nMin: %d \nAverage: %f \n\n",sum,max,min,avg);
printf("Search: ");
scanf("%d",&que);

for(i=0;i<=6;i++)
{
if(a[i]==que)
printf("\nThe number %d found in block %d .\n",que,i+1);
}

getch();
return 0;
}
