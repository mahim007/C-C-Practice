#include<stdio.h>

int main()
{
       double x,y;
       double z,result;
       
       while(scanf("%lf %lf",&x,&y)==2)
       {      z=y/100;
              z=z*z;
              result=x/z;
              
              if(result<18.5)
                     printf("Underweight\n");
              
              else if(result>=18.5 && result<=23.0)
                     printf("Normal\n");
              else if(result>23.0)
                     printf("Overweight\n");
       }
       
       return 0;
}