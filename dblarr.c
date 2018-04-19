#include<stdio.h>
int main()
{   int i,j;
    int arr1[]={1,2,3,4,5};
    int arr2[5];

    for(i=4,j=1;i>=0;i--,j++){
        arr2[j]=arr1[i];
        printf("%4d",arr2[j]);
    }


    return 0;
}
