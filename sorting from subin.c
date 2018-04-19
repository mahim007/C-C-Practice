#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{   char s[100],ch;
    int length,i,start;
    gets(s);
    length=strlen(s);
    start=0;
    for(i=0;i<length;i++){
        if(s[i]>='a' && s[i]<='z') {
                if(start==0){
                    start=1;
                    ch='A' +s[i]-'a';
                    printf("%c",ch);
                    }
                 else
                printf("%c",s[i]);
            }

        else if((s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
            if(start==0){
                start=1;
                }
            printf("%c",s[i]);
        }
        else{
        if(start==1)
            start=0;
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}
