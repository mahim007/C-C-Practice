#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
        int fact,i;
        for(i=1;i<=100;i++)
                fact=((fact%7)+(i%7))%7;
        printf("%d\n",fact);
        
        
        return 0;
}