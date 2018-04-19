#include<stdio.h>
int main()
{
    char i,j,k;
    for(i=65;i<=65+3;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
    for(i=i-2;i>=65;i--)
    {
        for(k=65;k<=i;k++)
        {
            printf("%c",i);
        }
        printf("\n");
    }


}

