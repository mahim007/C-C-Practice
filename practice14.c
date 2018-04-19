#include<stdio.h>
#include<conio.h>
int main()
{
       int i,j,pos,item,array[20],n;
       
       printf("\nHow many numbers?:\t");
       scanf("%d",&n);
       
       printf("\nType your array:");
       for(i=0;i<n;i++)
              scanf("%d",&array[i]);
              
       printf("position=");
       scanf("%d",&pos);
       
       printf("\nEnter your item=");
       scanf("%d",&item);
       
       for(j=i;j>pos-1;j--)
              array[j]=array[j-1];
              
       array[pos-1]=item;
       
       printf("\nNow your array is:\n");
       for(j=0;j<=i;j++)
              printf("%d    ",array[j]);
       
       
       return 0;
}