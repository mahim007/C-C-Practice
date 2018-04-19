#include<stdio.h>
#include<string.h>
int main()
{   char bin[10];
    int len;
    printf("\nEnter what u wish:");
    gets(bin);
    len=strlen(bin);
    puts(bin);
    strrev(bin);
    puts(bin);
    printf("%c      len=%d",bin[5],len);


    return 0;
}
