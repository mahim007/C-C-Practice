#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k,v;
//    clrscr();

    printf("Enter Level: ");
    scanf("%d",&v);

    for(i=1;i<=v;i++){

	for(j=1;j<=v-i;j++)
	{
	   printf(" ");
	}
	for(k=1;k<=(i*2-1);k++)
	{
	printf("*");
	}

			printf("\n");
			}

	getch();
	return 0;
}
