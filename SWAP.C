#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{   int array[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int low_indx=0;
    int high_indx=19;
    int mid_indx;
    int num;
    printf("\nType your number to search  :");
    scanf("%d",&num);


    while(low_indx<=high_indx)
        {
            mid_indx=(low_indx+high_indx)/2;

            if(num==array[mid_indx]){
                break;
            }

            if(num<array[mid_indx]){
                (high_indx=mid_indx-1);
            }

            else
                low_indx=mid_indx+1;

        }
    if(low_indx>high_indx)
        printf("\nYour number is not present in the array");

    else
        printf("\nYour is number located at  %d no possition in the array",mid_indx);


    getch();
    return 0;

}
