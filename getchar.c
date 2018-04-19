#include<stdio.h>
int main()
{   int i;
    char ch,str[100];

    i=0;
    printf("\nType few character.....");
    while((ch=getchar())!='\n')
        {   str[i]=ch;
            i++;

        }
    str[i]='\0';
    printf("\nYou have typed: %s",str);

    getch();
    return 0;
}
