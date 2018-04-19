#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k,v;
//clrscr();
printf("Enter Level: ");
scanf("%d",&v);
for(i=1;i<=6;i++)
{
for(j=6;j<=i;j--)
{
printf(" ");
}
for(k=1;k<=7-j;k++)
{
printf("*");
}



printf("\n");
}

getch();
return 0;
}
