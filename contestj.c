#include<stdio.h>

int main()
{
       int arr[100],n,t,temp,i,j,k=0;
       
       scanf("%d",&t);
       
       for(i=0;i<t;i++) {
              scanf("%d",&n);
              for(j=0;j<n;j++)
                     scanf("%d",arr[j]);
              for(j=0;j<n;j++) {
                     if(arr[j]>arr[j+1]){
                            temp=arr[j];
                          arr[j]= arr[n-j];
                          arr[n-j]=temp;
                          k++;
                     }
              }
         if(k==0)     
       printf("case %d: 0\n",i+1);
       else
              printf("case %d: %d",i+1,k);
       }
       return 0;
}