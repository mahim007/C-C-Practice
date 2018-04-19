#include<stdio.h>
#include<conio.h>

int main()
{
       int a[20],a1[20],a2[20],i,j,n,temp;
       
       printf("\nHow much digits?:\t");
       scanf("%d",&n);
       
       printf("\nEnter your array:\t");
       for(i=0;i<n;i++) {
              scanf("%d",&a[i]);
       }
       
       printf("\nMaximum number:\t");
       for(i=0;i<n;i++) {
              for(j=n-1;j>0;j--) {
                     if(a[j]>a[j-1]) {
                            temp=a[j];
                            a[j]=a[j-1];
                            a[j-1]=temp;
                     }
              }
       }
       for(i=0;i<n;i++) {
              a1[i]=a[i];
              printf("%d\t",a1[i]);
       }
       
       
       printf("\nMinimum number:\t");
       for(i=0;i<n;i++) {
              for(j=n-1;j>0;j--) {
                     if(a[j]<a[j-1]) {
                            temp=a[j];
                            a[j]=a[j-1];
                            a[j-1]=temp;
                     }
              }
       }
       for(i=0;i<n;i++) {
              a2[i]=a[i];
              printf("%d\t",a2[i]);
       }
       
       
       for(i=0;i<n;i++) {
              if(a2[i]==0)
                     continue;
              else
              {
                     temp=a2[i];
                     a2[i]=a2[0];
                     a2[0]=temp;
                     break;
              }
       }
       printf("\n\n");
       for(i=0;i<n;i++) {
              printf("%d\t",a2[i]);
       }
       
       
       return 0;
}
