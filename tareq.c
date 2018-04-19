#include<stdio.h>

int main()
{
    int temp[7];
    int i,max,min,avg=0;
    max=0,min=1000;

    printf("\nPlease enter temperature of 7 days:");
    for(i=0;i<7;i++)
        scanf("%d",&temp[i]);

    printf("\n\n\n");



    printf("\nAverage temperature is:");
    for(i=0;i<7;i++){
    avg=avg+temp[i];
    }

    avg=avg/7;
    printf("%d",avg);



    printf("\nMaximum temperature is:");
    for(i=0;i<7;i++){
        if(max<temp[i])
            max=temp[i];
    }
    printf("%d",max);



    printf("\nMinimum temperature is:");
    for(i=0;i<7;i++){
        if(min>temp[i])
            min=temp[i];

    }
    printf("%d",min);



    return 0;
}
