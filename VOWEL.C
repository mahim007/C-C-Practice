#include<stdio.h>
//#include<conio.h>
int main()
{
       int array[20],i,j,n,item,pos;
       printf("How many numbers?\t");
       scanf("%d",&n);
       
       printf("\nEnter your array:\t");
       for(i=0;i<n;i++)
              scanf("%d",&array[i]);
       
       printf("\nitem=");
       scanf("%d",&item);
       
       for(j=0;j<i;j++)
              {
                     if(item>array[j]  && item<array[j+1])
                     {
                            printf("\n%d",j);
                            pos=j;

                     }
              }
       
       for(i=j;i>pos+1;i--)
              {
                     array[i]=array[i-1];
              }
       
       array[pos+1]=item;       
              
              
              
       printf("\nNow your array is:\t\n");
       for(i=0;i<=n;i++)
              printf("%d\t",array[i]);
       
       return 0;
}