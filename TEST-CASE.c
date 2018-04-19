#include<stdio.h>
#include<conio.h>
int main()
{
int a, b, i, t, sum;
clrscr();
scanf("%d",&t);
for(i=1;i<=t;i++)
{
scanf("%d %d",&a,&b);
sum=a+b;
printf("Case %d : %d\n",i,sum);
}
getch();
return 0;
}