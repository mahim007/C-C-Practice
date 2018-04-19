#include<stdio.h>
#include<conio.h>
int main()
{
    int array[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int low_indx=0;
    int high_indx=19;
    int mid_indx,num;
    printf("\nType a number you want to search  :");
    scanf("%d",&num);


    while(low_indx<=high_indx)
        {
            mid_indx=(low_indx+high_indx)/2;
            if(num==array[mid_indx])
              break;
            else if(num>array[mid_indx])
              low_indx=mid_indx+1;
            else
              high_indx=mid_indx-1;

        }
        if(low_indx>high_indx)
              printf("\nnumber not found in the array");
        else
              printf("\nnumber %d is found at %dth position",num,mid_indx);
       return 0;
}
