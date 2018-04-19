#include<bits/stdc++.h>
#include<vector>
#include<map>
using namespace std;
 vector<int>graph[100];

int main()
{
    map<string,int>maap;
    vector<string>V;
    string a,b;

    int N,E,val=0;
    scanf("%d %d",&N,&E);
    for(int i=1;i<=E;i++)
    {

        cin>>a>>b;
        if(maap.find(a)==maap.end())
        {
            maap[a]=val;
            cout<<"mapping "<<a<<" with "<<val<<endl;
            val++;
            V.push_back(a);
        }
        if(maap.find(b)==maap.end())
        {
            maap[b]=val;
            cout<<"mapping "<<b<<" with "<<val<<endl;
            val++;
            V.push_back(b);
        }
        int x,y;
        x=maap[a];
        y=maap[b];
        cout<<x<<" "<<y<<endl;

        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for(int i=0;i<val;i++)
    {
        cout<<V[i]<<"->";
        for(int j=0;j<graph[i].size();j++)
        {
            cout<<V[graph[i][j]]<<" ";
        }
        printf("\n");
    }
    return 0;
}
