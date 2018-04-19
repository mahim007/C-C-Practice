#include<stdio.h>
#include<string.h>
int main()
{
    char address[]="we are anonymus,we do not forget,we do not forgive";
    int length;

    length=strlen(address);
    printf("\n String: %s",address);
    printf("\n\nThe string contains %d characters",length);

    getch();
    return 0;


}
