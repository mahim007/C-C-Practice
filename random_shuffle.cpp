#include<bits/stdc++.h>
using namespace std;

#define ll long long int

vector<ll>V;

int main(){
    srand(time(0));

    for(ll i=1;i<=9;i++) V.push_back(i);

    random_shuffle(V.begin(),V.end());
    for(ll i=0;i<V.size();i++) printf("%lld ",V[i]); printf("\n");

//        random_shuffle(V.begin(),V.end());
//    for(ll i=0;i<V.size();i++) printf("%lld ",V[i]); printf("\n");
//
//        random_shuffle(V.begin(),V.end());
//    for(ll i=0;i<V.size();i++) printf("%lld ",V[i]); printf("\n");
//
//            random_shuffle(V.begin(),V.end());
//    for(ll i=0;i<V.size();i++) printf("%lld ",V[i]); printf("\n");
//
//            random_shuffle(V.begin(),V.end());
//    for(ll i=0;i<V.size();i++) printf("%lld ",V[i]); printf("\n");
}
