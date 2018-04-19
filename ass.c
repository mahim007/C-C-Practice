#include<stdio.h>
main()
{
    int a[5][5],b[5][5],c[5][5],i=0,j=0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);

           for(i=0;i<5;i++)
            for(j=0;j<5;j++)
            {c[i][j]=a[i][j]+b[i][j];
            printf("%d",c[i][j]);
            printf("\n");}





}
