#include<stdio.h>
#define ROW 3
#define COL 4
int main()
{   int row,col;
    float arr[ROW][COL]={
                        {1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        };
    for(row=0;row<ROW;row++)
        {   for(col=0;col<COL;col++)
                {   printf("\nElement [%d] [%d]=%6.2f",row,col,arr[row][col]);

                }
        }

    getch();
    return 0;

}
