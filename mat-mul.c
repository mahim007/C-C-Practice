#include<stdio.h>
int main()
{   int a[2][2]={{3,4},
                {4,5}
                };
    int b[2][2]={{5,6},
                 {6,7}
                 };
    int c[2][2],i,j,k,sum;

    printf("\nMatrix a is\n\t\t");
    for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
                printf("%d\t",a[i][j]);
            printf("\n\t\t");
        }
    printf("\nMatrix b is\n\t\t");
    for(i=0;i<2;i++)
        {   for(j=0;j<2;j++)
                    printf("%d\t",b[i][j]);
                printf("\n\t\t");

        }

    printf("\nMultiplacation of a & b is :\n\t\t");
    for(i=0;i<2;i++)
        { for(j=0;j<2;j++)
            {   sum=0;
                    for(k=0;k<2;k++)
                        sum=sum+a[i][k]*b[k][j];
                    c[i][j]=sum;
                    printf("%d\t",c[i][j]);
            }
         printf("\n\t\t");
        }
    getch();
    return 0;

}