#include<stdio.h>
int main()
{   int row=0,
        col=0,
        size=0,
        sumabove=0,
        sumbelow=0,
        matrix[5][5];
    printf("\nMatrix size? :");
    scanf("%d",&size);

    printf("\nEnter Matrix element.....");
    for(row=1;row<size+1;row++)
        {   for(col=1;col<size+1;col++)
                { printf("Element[%d][%d]=",row,col);
                  scanf("%d",&matrix[row][col]);
                }
            printf("\n");
        }
    printf("\nThe given Matrix is :\n");
    for(row=1;row<size+1;row++)
        { for(col=1;col<size+1;col++)
            printf("%4d",matrix[row][col]);
         printf("\n");
        }


    printf("\nDiagonal elements are:");
    for(row=1;row<size+1;row++)
        {
            for(col=1;col<size+1;col++)
                {if(row==col)
                printf("%4d",matrix[row][col]);
                }
        }

    printf("\nElements above main diagonal :");
    for(row=1;row<size+1;row++)
        {
            for(col=1;col<size+1;col++)
                {
                    if(row<col)
                    {

                    printf("%4d",matrix[row][col]);
                    sumabove+=matrix[row][col];
                    }
                }
        }


    printf("\nElements below the main diagonal");
    for(row=1;row<size+1;row++)
        {
            for(col=1;col<size+1;col++)
                {
                    if(row>col)
                    {
                        printf("%4d",matrix[row][col]);
                        sumbelow+=matrix[row][col];
                    }
                }
        }

    printf("\nThe sum of above main diagonal is :%d\n\
                         below main diagonal is :%d\n",sumabove,sumbelow);
   getch();
   return 0;
}
