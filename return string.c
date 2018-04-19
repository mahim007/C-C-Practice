#include<stdio.h>
#include<string.h>
char funcx(char* str)
{
    strcpy(str,"We are ANONYMUS,we do not forget,we do not forgive");
    return str;
}
int main()
{
    char str[100];
    char* ptr;

    ptr=funcx(str);
    printf("The return string is:%s\n",str);


    return 0;
}
