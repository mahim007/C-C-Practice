#include<stdio.h>
int main()
{
    char *city_name[6]={"Dhaka",
                        "Chittagong",
                        "Rajsahi",
                        "Khulna",
                        "Barishal",
                        "Sylhet"
                        };


    int n=0;
    for(n=0;n<6;n++)
        {
            printf("\nCity name[%d] is %s",n+1,city_name[n]);
        }
    printf("\n\nname[%d] is %s",n,city_name[n]);
    return 0;
}
