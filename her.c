#include<stdio.h>


#define mxn 30
int arr[mxn];

int fun(int n){
    int x;
    if(n==1){
        return arr[n]=1;
    }

    x=fun(n-1);
    return arr[n]=x*x+1;
}

int main(){
    int n,ans,i;
    memset(arr,-1,sizeof arr);

    scanf("%d",&n);
    ans=fun(n);

    for(i=1;i<=6;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
