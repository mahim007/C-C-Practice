#include<bits/stdc++.h>
using namespace std;
vector< pair<string,int> >v;
int main()
{
    string s;//="mississippi";
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        v.push_back({s.substr(i),i});
        //cout<<s.substr(i)<<endl;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].second<<" "<<v[i].first<<endl;
    }
    return 0;
}
