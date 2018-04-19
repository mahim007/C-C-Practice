#include<stdio.h>
#include<conio.h>
int main()
{   float a,b,c;
    //clrscr();
    printf("enter three values:");
    scanf("%f %f %f",&a,&b,&c);
    printf("The larger value is:");
    if(a>b)
        {if(a>c)
            printf("%f",a);
         else
            printf("%f",c);

        }
    else
        {if(b>c)
            printf("%f",b);
         else
            printf("%f",c);
        }
    return 0;
}
