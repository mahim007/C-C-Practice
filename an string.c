#include<stdio.h>
int main()
{

    int n,i=0;
    printf("\nType a number for n=");
    scanf("%d",&n);
    char str[n];
    char ch;
    while((ch=getchar)!='\n')
        {if(i<n)
            str[i++]=ch;
        str[i]='\0';}

    printf("%s",str[i]);

    getch();
    return 0;


}
