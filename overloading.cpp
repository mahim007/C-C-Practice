#include<bits/stdc++.h>
using namespace std;
struct data
{
    int u,v,cost;
    bool operator < (const data& p) const
    {
        return cost>p.cost;
    }
};
vector<data>V;
int main()
{
    int i,n;
    cout<<"How many?:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        int u,v,cost;
        cin>>u>>v>>cost;
        data p;
        p.u=u;
        p.v=v;
        p.cost=cost;
        V.push_back(p);
    }
    sort(V.begin(),V.end());
    for(i=0;i<n;i++)
    {
        cout<<"pos:"<<i+1<<" u:"<<V[i].u<<" v:"<<V[i].v<<" cost:"<<V[i].cost<<endl;
    }
    return 0;
}
