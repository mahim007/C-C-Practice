#include<bits/stdc++.h>
using namespace std;
#define maxx 1000

int main()
{
    int N,E,i;
    vector<int>graph[maxx];
    scanf("%d %d",&N,&E);
    for(i=1;i<=E;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for(i=1;i<=N;i++)
    {
        printf("%d er sathe connected ase: ",i);
        for(int j=0;j<graph[i].size();j++)
        {
            printf("%d ",graph[i][j]);
        }
        printf("\n");
    }
    return 0;
}
