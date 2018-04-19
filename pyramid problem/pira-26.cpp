#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len;
    char str[50]={'I','N','D','I','A'};
    //gets(str);
    len=strlen(str);

    for(i=0;i<len;i++) {
        for(j=0;j<=i;j++)
            printf("%c",str[j]);

        printf("\n");
    }

    for(i=len-1;i>=0;i--) {
        for(j=0;j<=i;j++)
            printf("%c",str[j]);

        printf("\n");
    }
    return 0;
}
