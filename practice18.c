#include<stdio.h>
#include<conio.h>
int main()
{
       int array[20],i,pos,n,item;
       
       printf("\nHow many numbers?:\t");
       scanf("%d",&n);
       
       printf("\nNow enter your array:\t");
       
       for(i=0;i<n;i++)
              scanf("%d",&array[i]);
              
       printf("\nitem=");
       scanf("%d",&item);       
       
       for(i=0;i<n;i++)
              {
                     if(item==array[i])
                            pos=i;
              }
        printf("position=%d",pos+1);
        
        return 0;
              
       
}