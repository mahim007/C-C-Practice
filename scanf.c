#include<stdio.h>
int main()
{
 int a;
 float b;
 char c;
 printf("Enter values for a,b,c:");

 if(scanf("%d %f %c",&a,&b,&c)==3)
     printf("a=%d b=%f c=%c\n",a,b,c);
     else
         printf("Error in input!!!\n");

//  printf("%f",(float(c)+float(b)));
  return 0;
  }
