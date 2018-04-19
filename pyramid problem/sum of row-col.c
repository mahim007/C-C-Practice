#include<stdio.h>

int main()
{
       int R,C,i,j,k,row,col;
       scanf("%d %d",&R,&C);
       int array[R][C];
       
       printf("Enter your array:\n");
       for(i=0;i<R;i++) {
              for(j=0;j<C;j++)
                     scanf("%d",&array[i][j]);
       }
       
       for(i=0;i<R;i++) {
              row=0;
              for(j=0;j<C;j++)
               row=row+array[i][j];
       
       printf("\nSum of row %d=%d",i+1,row);
       }
       printf("\n\n\n");
       for(j=0;j<C;j++) {
                     col=0;
              for(k=0;k<R;k++) 
                     col=col+array[k][j];
       
       printf("\nSum of col %d=%d",j+1,col);
       }
       
       return 0;
}