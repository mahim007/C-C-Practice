#include<stdio.h>

int main()
{
    int i,j,k,n;

    printf("n=");
    scanf("%d",&n);

    for(i=1;i<=n;i++) {
        for(j=i;j<n;j++)
        printf(" ");

        for(k=i;k>=1;k--)
        printf("%d",k);

        printf("\n");
    }

    return 0;
}
