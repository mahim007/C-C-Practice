#include<stdio.h>
#include<conio.h>

int main()
{
       int i,j,n,ara[50],temp;
       
       printf("\nhow many numbers?\n");
       scanf("%d",&n);
       
       printf("\nInput your array:\t");
       
       for(i=0;i<n;i++)
              scanf("%d",&ara[i]);
       
       
       for(i=0;i<n;i++)
       {
              for(j=n-1;j>0;j--)
              {
                     if(ara[j]<ara[j-1]){
                            temp=ara[j];
                            ara[j]=ara[j-1];
                            ara[j-1]=temp;
                     }
              }
       }
       printf("now your array is\n");
       for(i=0;i<n;i++)
              printf("%d\t",ara[i]);
       
       return 0;
}