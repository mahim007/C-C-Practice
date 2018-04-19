#include<stdio.h>
#define n 100
int main()
{   char grade[n];
    char ch;
    scanf("%c",&ch);
    switch(ch)
        {
            case 'a':
            grade[n]="Honours";
            break;
            case 'b':
            grade[n]="Masters";
            break;
            default:
                grade[n]="fail";
        }
 return 0;
}
