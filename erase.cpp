#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<ll>V;

int main(){
    ll i,j,k;
    for(i=1;i<=10;i++){
        V.push_back(i);
    }

    for(i=0;i<V.size();i++) cout<<V[i]<<" ";
    cout<<"\n";

    V.erase(V.begin()+2);
    cout<<"after deleting\n";
    for(i=0;i<V.size();i++) cout<<V[i]<<" ";
    cout<<"\n";

    V.insert(V.begin()+2,3);
    cout<<"after inserting\n";
    for(i=0;i<V.size();i++) cout<<V[i]<<" ";
    cout<<"\n";

    return 0;
}
