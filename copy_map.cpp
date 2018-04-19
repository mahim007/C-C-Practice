#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll>M,P,X;

int main(){
    M[1]=1;
    M[2]=5;
    M[3]=19;
    P[2]=3;
    P[10]=9;
//    X=M+P;
    P.insert(M.begin(),M.end());
    map<ll,ll>::iterator it;
    for(it=P.begin();it!=P.end();it++) cout<<it->first<<" "<<it->second<<endl;
}
