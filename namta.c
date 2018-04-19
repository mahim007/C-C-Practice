#include<stdio.h>

int main()
{
    int i,j,n;
    for(i=1;i<=10;i++)
        {   n=0;
            for(j=1;j<=10;j++)
            {   n=n+i;
                printf("%d X %d =%d\n",i,j,n);


            }
        printf("\n\n-------------------------------------------------------------\n\n");

        }
    return 0;
}
