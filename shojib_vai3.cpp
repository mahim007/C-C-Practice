#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n,ans=0;
    cin>>n;
    while(n){
        ans++;
        n=n/10;
    }

    cout<<ans<<"\n";
}
