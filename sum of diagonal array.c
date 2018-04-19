#include<stdio.h>
#define R 4
#define C 4

int main()
{
       int arr[R][C],i,j,k,del=0,sum1=0,sum2=0;
       
       printf("\nType your matrix:\n");
       for(i=0;i<R;i++) {
              for(j=0;j<C;j++) 
                     scanf("%d",&arr[i][j]);
       }
       
       if((R%2)!=0)
       del=arr[(R-1)/2][(R-1)/2];
       
       for(i=0,j=0,k=C-1;i<R;i++,j++,k--) {
              sum1=sum1+arr[i][j];
              sum2=sum2+arr[i][k];
       }
       printf("\nSum1=%d",sum1);
       printf("\nSum2=%d",sum2);
       
       printf("\nThe summation of diagonal array is %d",sum1+sum2-del);
       
       return 0;
}