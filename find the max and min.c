#include<stdio.h>

int main()
{
       int array[5000];
       int n,t,i,j,k,temp;
       scanf("%d",&t);
       
       
       for(i=1;i<=t;i++) {
              scanf("%d",&n);
              for(j=0;j<n;j++)
                     scanf("%d",&array[j]);
              
              for(j=1;j<n;j++) {
                     for(k=0;k<n-j;k++)
                     if(array[k]<array[k+1]) {
                            temp=array[k];
                            array[k]=array[k+1];
                            array[k+1]=temp;
                     }
              }
              for(j=0;j<n;j++)
                     printf("%d",array[j]);
              printf("\n");
              
              
              
              
              
              for(j=1;j<n;j++) {
                     for(k=0;k<n-j;k++)
                     if(array[k]>array[k+1]) {
                            temp=array[k];
                            array[k]=array[k+1];
                            array[k+1]=temp;
                     }
              }
             for(j=0;j<n;j++){
                     if(array[j]!=0) {
                            break;
                            }
             
              }
              
              if(array[0]==0)
                     {
                     temp=array[j];
                     array[j]=array[0];
                     array[0]=temp;
              }
              for(j=0;j<n;j++)
                     printf("%d",array[j]);
              puts("");
       }
       
       return 0;
}
