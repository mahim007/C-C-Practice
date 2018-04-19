#include<stdio.h>
#include<conio.h>

int main()
{
    int array[5000],i,max1=-1000,max2=-1000,n;

    printf("How many numbers?");
    scanf("%d",&n);

    printf("\nEnter your array (separated by space):\t");
    for(i=0;i<n;i++)
        {
            scanf("%d",&array[i]);

            if(max1<array[i])
                max1=array[i];

        }
    printf("\nFirst maximum number is   %d",max1);

    for(i=0;i<n;i++)
        {
            if(max2<array[i] && array[i]<max1)
                max2=array[i];
        }
    printf("\nSecond maximum number is  %d",max2);
    getch();
    return 0;
}
