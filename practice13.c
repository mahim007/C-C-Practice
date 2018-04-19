#include<stdio.h>
#include<conio.h>
int main()
{
       int num,i,count=0;
       
       printf("\n Type your number:\t");
       scanf("%d",&num);
       
       
       for(i=1;i<=num;i++)
              {
                     if((num%i)==0)
                            {
                                   printf("%d\t",i);
                                   count++;
                            }
              }
              
       printf("\ncount=%d",count);
       
       return 0;
}

