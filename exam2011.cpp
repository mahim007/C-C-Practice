///*Bismillahir Rahmanir Rahim*///
///*******Asifur Rahman*******///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define a 1234567
#define b 123456
#define c 1234
int main()
{
    ll i,j,n,k;
    string s;
    while(cin>>n){
            bool f=0;
            for(i=0;i<=n/a;i++){
                for(j=0;j<=n/b;j++){
                    ll x=n-(i*a+b*j);
                    if(x%c==0){
                        f=1;
                        break;
                    }
                    if(x<0)
                        break;
                }
            }
            if(f==1)
                cout<<"YES\n";
            else
                cout<<"NO\n";
 }
    return 0;
}
