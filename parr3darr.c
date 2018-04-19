#include<stdio.h>
void array2d(int array_name[][10],int n)
{   int x,y;
    for(x=0;x<n;x++)
       { for(y=0;y<5;y++)
            printf(" %2d ",array_name[x][y]);
        printf("\n");
       }
    getch();

}
int main()
{   int nipu[1][5]={1,2,3,4,5};
    int romi[2][5]={{6,7,8,9,10},
                    {11,12,13,14,15}};
    int ratna[3][5]={{1,2,3,4,5},
                    {6,7,8,9,10},
                    {20,21,22,23,24}};
    printf("\nElement of nipu array.....\n\n");
    array2d(nipu,1);
    printf("\nElement of romi array.....\n\n");
    array2d(romi,2);
    printf("\nElement of ratna array.....\n\n");
    array2d(ratna,3);

    return 0;

}