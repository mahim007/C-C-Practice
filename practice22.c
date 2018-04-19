#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
       char ch,str[100];
       int i=0,j,length;
       
       printf("\nEnter message:\t");
       gets(str);
       
       length=strlen(str);
       
       
       for(i=0;i<length;i++)
       {
              if(str[i]>='A' && str[i]<='z'  || str[i]==' ')
                     printf("%c ",str[i]);
              
       }
       
      // puts(str);
       
       return 0;
}