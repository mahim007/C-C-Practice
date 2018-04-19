#include<stdio.h>
int main()
{   char ch,str[100];
    int i=0;

    while((ch=getchar())!='\n'){
           str[i]=ch;
            i++;
            }
        str[i]='\0';


            printf("%s",str);

    return 0;
}
