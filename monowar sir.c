#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],str2[100];
    int len,i,j=0;
    
    printf("\nEnter your string:\t");
    gets(str);
    len=strlen(str);
    
    for(i=len-1;i>=0;i--,j++) {
        str2[j]=str[i];
    }
    str2[j]='\0';
    puts(str2);
    return 0;
}