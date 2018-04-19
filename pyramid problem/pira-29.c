#include<stdio.h>

int main()
{
    int i,j,k,n,l;

    printf("n=");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        printf(" ");

    for(k=i;k<=n;k++)
    {
        printf("%d",k);
    }
    for(l=k-2;l>=i;l--)
    printf("%d",l);


    printf("\n");
    }
}
