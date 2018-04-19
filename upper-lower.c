#include<stdio.h>
int main()
{   int i,len=10;
    char ch[]={'B','a','n','g','l','a','d','e','s','h','\0'};

    printf("%s\n",ch);

    for(i=0;i<len;i++){
        if(ch[i]>=97 && ch[i]<=122){
            ch[i]='A'+ch[i]-'a';
        }

    }

    printf("\n%s",ch);
    printf("\n%d letters used here",i);
    return 0;
}
