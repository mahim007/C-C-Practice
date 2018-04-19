#include<stdio.h>
void main()
{
    int n,sum=0,sheuli;
    printf("Enter a value for n:");
    scanf("%d",&n);

    for(sheuli=2;sheuli<=n;sheuli=sheuli+2)
    {

        sum=sum+(sheuli*sheuli);
    }
    printf("sum=%d",sum);

}
