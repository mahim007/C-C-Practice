#include<stdio.h>
#include<conio.h>
int main()
{
       int i,j,a[50],n,temp;
       
       printf("\nhow many numbers?:\t");
       scanf("%d",&n);
       
       printf("\nEnter your numbers\t");
       for(i=0;i<n;i++)
              scanf("%d",&a[i]);
       
       
       for(j=1;j<n;j++)
       {
              temp=a[j];
              i=j-1;
              
              while(temp<a[i] && i>=0)
              {      a[i+1]=a[i];
                     a[i]=temp;
                     i--;
              }
              
       }
       
       
       printf("\nNow your array is :\t");
       for(i=0;i<n;i++)
              printf("%d\t",a[i]);
       
       
       return 0;
}