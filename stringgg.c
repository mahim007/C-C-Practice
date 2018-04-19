#include<stdio.h>
#include<conio.h>
#include<string.h>
int read_line(int);
int main()
{   int n;
    printf("\nType a number for n=");
    scanf("%d",&n);
    read_line(n);
    getch();
    return 0;
    }

int read_line(int n)
{   char str[n];
    char ch;
    int i=0;
    while((ch=getchar())!='\n')
        {   if(i<n)
                str[i++]=ch;
            else
                str[i]='\0';


        }
    printf("%s\ni=%d",str,i);
}
