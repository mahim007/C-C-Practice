#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
    ll i,j,k;
    ll a,b,c,n;

    cin>>a>>b>>n;

    for(i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }

    cout<<b<<"\n";
    return 0;
}
