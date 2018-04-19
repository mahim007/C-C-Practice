#include<stdio.h>
int main()
{   int arr[5];
    int i;
    printf("Type your numbers:");

    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=4;i>=0;i--){
        printf("%4d",arr[i]);
    }





   // printf("%d",arr[i]);}

    return 0;
}
