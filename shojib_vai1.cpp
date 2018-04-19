#include<bits/stdc++.h>
using namespace std;

#define ll long long int

string str;
string s[109];

int main() {
    ll n,i,j,k,sz,t;
    cin>>n;
    cin.ignore();

    for(t=1; t<=n; t++) {
        getline(cin,str);
        sz=str.size();

        k=0;
        ll f=0;
        for(i=0; i<sz; i++) {
            if( (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') ) {
                if(f==0) {
                    f=1;
                    k++;
                }

                s[k]+=str[i];
            } else if(str[i]==' ') {
                f=0;
            }
        }

        cout<<s[k];
        k--;
        for(; k>=1; k--) cout<<" "<<s[k];
        cout<<"\n";
        for(i=0; i<109; i++) s[i].clear();
    }

    return 0;
}
