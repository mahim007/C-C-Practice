#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{   char str1[50],str2[50];
    int x;

    printf("Enter first string:");
    gets(str1);

    printf("\nEnter second string:");
    gets(str2);

    x=strcmp(str1,str2);

    if(x==0)
        printf("\nTwo strings are equal");
    else
        printf("\nTwo strings are not equal");

    //printf("\n%d",x);
    getch();
    return 0;
}
