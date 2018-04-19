#include<stdio.h>
#include<conio.h>
int main()
{
       int array[20],i,n,j,pos,item;
       
       printf("\nHow many numbers?:\n");
       scanf("%d",&n);
       
       printf("\nEnter your array:\t");
       for(i=0;i<n;i++)
              scanf("%d",&array[i]);
       
       printf("\nitem=");
       scanf("%d",&item);
       
       for(j=0;j<n;j++)
              {
                     if(item==array[j])
                            pos=j;
              }
              
       for(j=pos;j<n-1;j++)
       {
              array[j]=array[j+1];
       }
       
       printf("\nNow your array is:\n");
       for(i=0;i<n-1;i++)
       {
              printf("%d\t",array[i]);
       }
       
       
       return 0;
       
}