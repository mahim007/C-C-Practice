#include<stdio.h>
#include<conio.h>
int powr(int base, int power)
	{
	int i, x=1;
	for(i=1;i<=power;i++)
	{
	x=x*base;
	}
	return x;
	}

int main()
{
int b,p,r;
//clrscr();
printf("Enter base: ");
scanf("%d",&b);
printf("Enter power: ");
scanf("%d",&p);
r = powr(b,p);
printf("Result: %d",r);

getch();
return 0;
}