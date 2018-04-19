#include<stdio.h>

int main()
{
    int i,j,k=1,n,mod;

    printf("n=");
    scanf("%d",&n);

    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++,k++) {
            mod=k%2;
            printf("%d",mod);
        }
        printf("\n");
        }

    return 0;
}
