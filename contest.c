#include<stdio.h>
#include<conio.h>

int main()
{
       int num,j,i=0,temp,len,freq1=-100,freq0=-100;
       int bin[100],fre1[100]={1},fre0[100]={1};
       printf("\nEnter your decimal number:\t");
       scanf("%d",&num);
       
       while(num>0) {
              bin[i]=num%2;
              num=num/2;
              printf("%d\t",bin[i]);
              i++;
       }
       len=i;
       
       printf("\n\n%d\n\n",i);
       for(j=0;j<len/2;j++,i--) {
              temp=bin[i-1];
              bin[i-1]=bin[j];
              bin[j]=temp;
       }
       for(j=0;j<len;j++) {
              printf("%d\t",bin[j]);
       }
       printf("\nfrequency of 1:\t");
       for(i=1;i<len;i++) {
              if(bin[i]==1 && bin[i]==bin[i-1])
                     fre1[i]=fre1[i-1]+1;
              else
                     fre1[i]=1;
       }
       for(i=0;i<len;i++) {
              if(freq1<fre1[i])
                     freq1=fre1[i];
       }
       printf("%d\n\n",freq1);
       
       printf("\nfrequency of 0:\t");
       if(freq1==len)
              printf("0");
       else
       {
       for(i=1;i<len;i++) {
              if(bin[i]==0 && bin[i]==bin[i-1])
                     fre0[i]=fre0[i-1]+1;
              else
                     fre0[i]=1;
       }
       for(i=0;i<len;i++) {
              if(freq0<fre0[i])
                     freq0=fre0[i];
       }
       printf("%d\n\n",freq0);
       }
       return 0;
} 