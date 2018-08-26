#include<iostream>
#include<string>
using namespace std;


#define ll long long int
#define mxn 10

const ll align=20;

string in[mxn];
string out[mxn+mxn];

string getspace(ll sz){
    string p="";
    while(sz>0){
        p+=' ';
        sz--;
    }

    return p;
}


int main(){
    ll i,n;

    cin>>n;
    cin.ignore();
    for(i=0;i<n;i++){ //cout<<"now i="<<i<<"\n";
        getline(cin, in[i]);
    }

    //for(i=0;i<n;i++) cout<<in[i]<<"\n";


    ll j=-1;
    for(i=0;i<n;i++){ //cout<<"precessing i="<<i<<"\n";
        j++;
        out[j]=getspace(align-in[i].size())+in[i];

        while(out[j].size()>align){
            string tmp=out[j].substr(align, out[j].size()-1); //cout<<"tmp="<<tmp<<"\n";
            out[j].erase(align, out[j].size()-1); //cout<<"now out[j]="<<out[j]<<"\n";
            out[j+1]=getspace(align-tmp.size())+tmp; //cout<<"and out[j+1]="<<out[j+1]<<"\n";
            j++; //system("pause");
        }
    }

    for(i=0;i<=j;i++){
        cout<<out[i]<<"\n";
    }

    return 0;
}
