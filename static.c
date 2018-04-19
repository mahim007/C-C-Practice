#include<stdio.h>
void statics(void);
int main()
{   statics();
    statics();
    statics();
    statics();

    getch();
    return 0;
}
void statics(void)
{    static int count=1;
    printf("\nMain calls static() %d times",count);
    count++;
}
