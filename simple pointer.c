#include<stdio.h>
#include<conio.h>


int getresult(int,int,int (*pfn)(int,int));
int maxvalue(int,int);
int minvalue(int,int);


int main()
{
    int x,y;
    printf("type a value for x:");
    scanf("%d",&x);
    printf("type a value for y:");
    scanf("%d",&y);

    printf("\nThe maximum between x and y is:%d",getresult(x,y,maxvalue));
    printf("\nThe minimum between x and y is:%d",getresult(x,y,minvalue));


    return 0;
}


int getresult(int x,int y,int (*pfn)(int,int))
{
    return (*pfn)(x,y);
}


int maxvalue(int x,int y)
{
    return ((x>y)?x:y);
}


int minvalue(int x,int y)
{
    return ((x<y)?x:y);
}
