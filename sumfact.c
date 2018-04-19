#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
       int num,i=0,j,temp;
       char bin[100];
       
       printf("\nEnter your decimal number:\t");
       scanf("%d",&num);
       
       while(num>0) {
              bin[i]=num%2;
              num=num/2;
              printf("%d",bin[i]);
              i++;
       }
       printf("\n\n%d\n",i);
       i=i-1;
       for(j=0;j<=i;j++) {
              temp=bin[i];
              bin[i]=bin[j];
              bin[j]=temp;
              printf("%d",bin[j]);
       }
       printf("\n");
       for(j=0;j<=i;j++) {
              printf("%d",bin[j]);
       }
       return 0;
}