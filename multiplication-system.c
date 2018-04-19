#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
       int num1,num2,result,first_digit,second_digit;
       printf("Chotobelay amra mayer kole boshe jei system e 2ta number gun korechi\n\t aj abar sei vabe gun korbo.....bt eibar korbo programming er maddhome :) :) :P :D\n\n\n\n");
       printf("\n\t  ");
       scanf("%d",&num1);
       printf("\n\t* ");
       scanf("%d",&num2);
       second_digit=num2%10;
       printf("\n-----------------\n");
       printf("\t %d\n",num1*second_digit);
       first_digit=num2/10;
       printf("\t%d\n",num1*first_digit);
       printf("-------------------------\n");
       printf("\t%d",num1*num2);
       
       return 0;
}