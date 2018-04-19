#include<stdio.h>
#include<conio.h>
int main()
{
       int ara[50],num,i,mid,low,high,n;
       
       printf("\nHow many numbers?\t");
       scanf("%d",&n);
       
       printf("\nEnter your arra:\t");
       for(i=0;i<n;i++)
              {
                     scanf("%d",&ara[i]);
              }
       printf("num=");
       scanf("%d",&num);
       
       low=0;
       high=n-1;
       
       while(low<=high)
              {
                     mid=(high+low)/2;
                     if(num==ara[mid])
                     {
                            break;
                     }
                     else if(num>ara[mid])
                     {
                            low=mid+1;
                     }
                     else
                     {
                            high=mid-1;
                     }
              }
              
       if(low>high)
       {
              printf("\nyour number %d is not present in the array.",num);
       }
       else
       {
              printf("\nthe position of your number %d is %d",ara[mid],mid+1);
       }
       
       return 0;
}