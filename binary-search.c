#include<Stdio.h>
#include<conio.h>
int main()
{
       int ara[20],low,high,i,item,n,mid;
       printf("\nHow many numbers?\t");
       scanf("%d",&n);
       printf("\nEnter your array:\t");
       for(i=0;i<n;i++) {
              scanf("%d",&ara[i]);
       }
       printf("item=");
       scanf("%d",&item);
       low=0,high=n-1;
       while(low<=high) {
              mid=(low+high)/2;
              if(ara[mid]==item)
                     break;
              if(item>ara[mid])
                     low=mid+1;
              
              else
                     high=mid-1;
       }
       if(low>high)
              printf("\nNumber not found in the array.");
       else
              printf("\nNumber %d found at the %dth position.",ara[mid],mid+1);
       return 0;
}