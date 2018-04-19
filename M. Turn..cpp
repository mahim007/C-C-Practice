#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,ans=9999999999999,turn=0;
    cin>>n;
    if(n<0){
        n=abs(n);
        n=n%360;
    }
    else{
        n=n%360;
        n=360-n;
    }

    for(ll i=0;i<4;i++){
        if(n>180){
            if(ans>abs(360-n)){
                ans=abs(360-n);
                turn=i;
            }
        }
        else{
            if(ans>n){
            ans=n;
            turn=i;
            }
        }
        n=n+90;
        n=n%360;
    }
    cout<<turn<<endl;
    return 0;
}
