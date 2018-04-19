#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,i,j,k,ans;
    cin>>n;
    ans=n-n/2-n/3+(n/(2*3));
    cout<<ans<<endl;
    ans=n-n/2-n/3+n/2/3;
    cout<<ans<<endl;
    return 0;
}
